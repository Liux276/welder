// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include "antares_ke_imp.hpp"
#include "nnfusion/common/util.hpp"
#include "nnfusion/util/curl_request.hpp"
#define ANTARES_FORMAT_CHECK(cond)                                                                 \
    NNFUSION_CHECK(cond) << "Cannot parse antares response, make sure antare server >= v0.2"

using namespace nnfusion;
using namespace nnfusion::kernels;

DECLARE_string(fantares_codegen_server);
DECLARE_string(ftuning_platform);
DECLARE_string(fdefault_device);

std::unordered_map<std::string, std::pair<std::string, bool>> AntaresKEImp::code_cache;

namespace
{
    auto get_between = [](const std::string& str,
                          const std::string& begin,
                          const std::string& end,
                          int start_idx = 0,
                          const std::string& def_ret = "") -> std::string {
        if (start_idx < 0)
            return def_ret;
        int at = str.find(begin);
        if (at < 0)
            return def_ret;
        at += begin.size();
        int next = str.find(end, at);
        if (next < at)
            return def_ret;
        return str.substr(at, next - at);
    };

    auto ssplit = [](const std::string& str, const std::string& sub) -> std::vector<std::string> {
        std::vector<std::string> ret;
        int it = 0, next;
        while (next = str.find(sub, it), next >= 0)
        {
            ret.push_back(str.substr(it, next - it));
            it = next + sub.size();
        }
        ret.push_back(str.substr(it));
        return std::move(ret);
    };
} // namespace

AntaresKEImp::AntaresKEImp()
{
    if (FLAGS_fantares_codegen_server.size() > 0)
    {
        m_static_tuning_server = FLAGS_fantares_codegen_server;
        auto items = split_string(m_static_tuning_server, ":");
        NNFUSION_CHECK(items.size() == 2) << "Wrong server format: " << m_static_tuning_server;
        auto port = atoi(items[1].c_str());
        m_dynamic_tuning_server = items[0] + ":" + std::to_string(port + 1);
    }
}

bool include_dynamic_shape(std::string expr)
{
    auto cur = 0;
    auto pos = 0;
    while ((pos = expr.find("shape", cur)) != std::string::npos)
    {
        auto left = expr.find("[", pos);
        auto right = expr.find("]", pos);
        NNFUSION_CHECK(left != std::string::npos && right != std::string::npos);
        auto dims = split_string(expr.substr(left + 1, right - left - 1), ",");
        for (auto dim : dims)
        {
            if (dim.find(":") != std::string::npos)
            {
                return true;
            }
        }
        cur = right;
    }
    if (expr.find("alter(") != std::string::npos)
    {
        return true;
    }

    auto where = 0;
    auto end = 0;
    if ((where = expr.find("where")) != std::string::npos)
    {
        if ((end = expr.find("\"", where)) != std::string::npos)
        {
            auto where_list = expr.substr(where + 6, end - where - 6);
            if (where_list.find(":") != std::string::npos)
            {
                return true;
            }
        }
    }
    return false;
}

std::pair<std::string, bool> AntaresKEImp::autogen(const std::string& expr,
                                                   const std::string& _tuning_platform)
{
    auto it = code_cache.find(expr);
    if (it != code_cache.end())
    {
        return it->second;
    }

    std::string response;
    bool tuned = false;
    // fetch from local cache folder
    if (FLAGS_fantares_codegen_server.size() == 0)
    {
        std::string tuning_platform =
            _tuning_platform == "" ? get_antares_device_type(get_device_type(FLAGS_fdefault_device),
                                                             FLAGS_ftuning_platform)
                                   : _tuning_platform;
        std::string file_id = sha256(expr);
        std::string cache_folder = "./kernel_cache";
        auto file_name = cache_folder + "/" + file_id + "." + tuning_platform + ".c";
        struct stat stats;
        if (stat(file_name.c_str(), &stats) != 0)
        {
            // generate default kernel
            std::string cmd = "PROGRESS=1 BACKEND=";
            cmd += tuning_platform;
            if (include_dynamic_shape(expr))
                cmd += " TVM=0";
            cmd += " COMPUTE_V1='";
            cmd += expr;
            cmd += ("' antares save " + file_name);
            int sys_ret = system(("STEP=0 " + cmd).c_str());
        }
        NNFUSION_LOG(INFO) << "fetch kernel from: " << file_name;
        std::ifstream ifs(file_name);
        std::string code((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
        // TODO: verify the IR in the code is the same as expr
        response = code;
    }
    // fetch from tuning server
    else
    {
        auto server =
            include_dynamic_shape(expr) ? m_dynamic_tuning_server : m_static_tuning_server;
        CurlRequest req(server);
        req.add_custom_header(("COMPUTE_V1: " + expr).c_str());

        if (!req.send_request(response))
        {
            NNFUSION_LOG(INFO) << "[Autogen] " << expr << " (tuned = " << -1 << ")";
            // code_cache[expr] = std::make_pair(response, -1);
            return std::make_pair("", tuned);
        }
    }

    if (strncmp(response.c_str(), "[ERROR]", 7) == 0 ||
        response.find("Error:") != std::string::npos)
    {
        NNFUSION_LOG(ERROR) << expr << "\n" << response;
        return std::make_pair("", tuned);
    }

    tuned = response.find("\n// Saved Perf =") != std::string::npos;
    //NNFUSION_LOG(INFO) << "[Autogen] " << expr << " (tuned = " << tuned << ")";
    code_cache[expr] = std::make_pair(response, tuned);
    return std::make_pair(response, tuned);
}

double AntaresKEImp::get_perf(const std::string& response)
{
    /*// Saved Perf = 2.211810e-06 sec / run; Step Produced = 10; Planned Steps = 10;*/
    double perf = -1;
    std::string identifier_st = "\n// Saved Perf = ";
    std::string identifier_ed = " sec / run";
    size_t pos = response.find(identifier_st);
    bool tuned = pos != std::string::npos;
    if (tuned)
    {
        pos += identifier_st.size() - 1;
        size_t pos_ed = response.find(identifier_ed, pos);
        perf = std::stod(response.substr(pos, pos_ed - pos));
    }
    return perf;
}

std::pair<int, int> AntaresKEImp::get_tuning_step(const std::string& response)
{
    /*// Saved Perf = 2.211810e-06 sec / run; Step Produced = 10; Planned Steps = 10;*/
    int step_produced = -1;
    int planned_steps = -1;

    size_t pos = response.find("\n// Saved Perf = ");
    bool tuned = pos != std::string::npos;
    if (tuned)
    {
        size_t pos_st, pos_ed;

        std::string identifier_step_procuded = "Step Produced = ";
        pos_st = response.find(identifier_step_procuded, pos) + identifier_step_procuded.size() - 1;
        pos_ed = response.find(";", pos_st);
        NNFUSION_CHECK(pos_st != std::string::npos && pos_ed != std::string::npos);
        step_produced = std::stoi(response.substr(pos_st, pos_ed - pos_st));

        std::string identifier_planned_steps = "Planned Steps = ";
        pos_st = response.find(identifier_planned_steps, pos) + identifier_planned_steps.size() - 1;
        pos_ed = response.find(";", pos_st);
        NNFUSION_CHECK(pos_st != std::string::npos && pos_ed != std::string::npos);
        planned_steps = std::stoi(response.substr(pos_st, pos_ed - pos_st));
    }

    return std::make_pair(step_produced, planned_steps);
}

std::string AntaresKEImp::get_device_name(const std::string& response)
{
    /*// BACKEND: c-cuda (Tesla V100-PCIE-16GB)*/
    /*// BACKEND: c-cuda (default)*/
    std::string device_name = "default";
    size_t pos = response.find("\n// BACKEND: ");
    if (pos != std::string::npos)
    {
        size_t pos_st = response.find("(", pos) + 1;
        size_t pos_ed = response.find(")", pos);
        NNFUSION_CHECK(pos_st != std::string::npos && pos_ed != std::string::npos);
        device_name = response.substr(pos_st, pos_ed - pos_st);
    }
    return device_name;
}

std::vector<nnfusion::Shape> AntaresKEImp::get_output_shapes(const std::string& response)
{
    // // GLOBALS: input0:float32[1, 576, 768], input1:float32[1, 576, 768] -> output0:float32[1, 576, 768]
    std::vector<nnfusion::Shape> output_shapes;

    size_t pos_st = response.find("// GLOBALS:");
    ANTARES_FORMAT_CHECK(pos_st != std::string::npos) << response;

    auto sig = get_between(response, "// GLOBALS:", "\n");
    auto outputs = ssplit(sig, "->").at(1);
    auto splitted_outputs = ssplit(outputs, ", output");
    for (const auto& output : splitted_outputs)
    {
        nnfusion::Shape shape;
        auto shape_str = get_between(output, "[", "]");
        for (auto dim_str : ssplit(shape_str, ","))
        {
            shape.push_back(std::stoul(dim_str));
        }
        output_shapes.push_back(shape);
    }
    return output_shapes;
}

std::vector<AntaresKernelInfo::Pointer> AntaresKEImp::get_kernel_info(const std::string& response)
{
    // example:
    // LOCAL: template_op_kernel0 -- input0:float32[1, 12, 576, 576] -> mediate0:float32[1, 12, 576]
    // ...
    // LOCAL: template_op_kernel1 -- input0:float32[1, 12, 576, 576], mediate0:float32[1, 12, 576] -> mediate1:float32[1, 12, 576]
    // ...
    // LOCAL: template_op_kernel2 -- input0:float32[1, 12, 576, 576], mediate0:float32[1, 12, 576], mediate1:float32[1, 12, 576] -> output0:float32[1, 12, 576, 576]

    std::vector<AntaresKernelInfo::Pointer> res;

    std::string start = "// LOCAL: ";
    std::string end = "\n";
    std::vector<std::string> kernel_info_cmt;

    int s_pos = response.find(start, 0);

    while (s_pos > 0)
    {
        int e_pos = response.find(end, s_pos);
        NNFUSION_CHECK(e_pos >= 0);
        std::string info = response.substr(s_pos + 10, e_pos - s_pos - 10);
        kernel_info_cmt.push_back(info);
        s_pos = response.find(start, e_pos);
    }

    for (size_t i = 0; i < kernel_info_cmt.size(); i++)
    {
        std::string info = kernel_info_cmt[i];
        AntaresKernelInfo::Pointer kernel_info = std::make_shared<AntaresKernelInfo>();

        int kernel_name_s_pos = 0;
        int kernel_name_e_pos = info.find(" -- ", kernel_name_s_pos);
        NNFUSION_CHECK(kernel_name_e_pos >= 0);
        kernel_info->kernel_name =
            info.substr(kernel_name_s_pos, kernel_name_e_pos - kernel_name_s_pos);
        int input_name_e_pos = info.find(" -> ", kernel_name_e_pos);
        NNFUSION_CHECK(input_name_e_pos >= 0);
        std::string input_info =
            info.substr(kernel_name_e_pos + 4, input_name_e_pos - kernel_name_e_pos - 4);
        std::string output_info = info.substr(input_name_e_pos + 4);

        int single_input_s_pos = 0;
        int single_input_e_pos = input_info.find("]", single_input_s_pos);
        while (single_input_e_pos > 0)
        {
            std::string input =
                input_info.substr(single_input_s_pos, single_input_e_pos - single_input_s_pos + 1);
            int name_e_pos = input.find(":");
            NNFUSION_CHECK(name_e_pos >= 0);
            int shape_s_pos = input.find("[");
            NNFUSION_CHECK(shape_s_pos >= 0);
            kernel_info->input_names.push_back(input.substr(0, name_e_pos));
            kernel_info->input_dtypes.push_back(
                input.substr(name_e_pos + 1, shape_s_pos - name_e_pos - 1));
            kernel_info->input_shapes.push_back(input.substr(shape_s_pos));

            single_input_s_pos = single_input_e_pos + 3;
            single_input_e_pos = input_info.find("]", single_input_s_pos);
        }

        int single_output_s_pos = 0;
        int single_output_e_pos = output_info.find("]", single_output_s_pos);
        while (single_output_e_pos > 0)
        {
            std::string output = output_info.substr(single_output_s_pos,
                                                    single_output_e_pos - single_output_s_pos + 1);
            int name_e_pos = output.find(":");
            NNFUSION_CHECK(name_e_pos >= 0);
            int shape_s_pos = output.find("[");
            NNFUSION_CHECK(shape_s_pos >= 0);
            kernel_info->output_names.push_back(output.substr(0, name_e_pos));
            kernel_info->output_dtypes.push_back(
                output.substr(name_e_pos + 1, shape_s_pos - name_e_pos - 1));
            kernel_info->output_shapes.push_back(output.substr(shape_s_pos));

            single_output_s_pos = single_output_e_pos + 3;
            single_output_e_pos = output_info.find("]", single_output_s_pos);
        }
        res.push_back(kernel_info);
    }

    return res;
}