import argparse
import os
import os.path as osp
import time

import numpy as np
import torch
from model.pytorch import *
import shutil


def tofp16model(in_file_name, out_file_name):
    from onnx import checker, load_model, save_model
    from onnxconverter_common import convert_float_to_float16
    onnx_model = load_model(in_file_name)
    trans_model = convert_float_to_float16(onnx_model, keep_io_types=False)
    checker.check_model(trans_model)
    save_model(trans_model, out_file_name)

def torch2onnx(prefix, model, inputs, fp16):
    outputs = model(*inputs)
    if not isinstance(outputs, (tuple, list)):
        outputs = (outputs, )
    input_names = ["input"+str(i) for i in range(len(inputs))]
    output_names = ["output"+str(i) for i in range(len(outputs))]
    file_dir = osp.join(prefix, "onnx")
    if os.path.exists(file_dir):
        shutil.rmtree(file_dir)
    os.mkdir(file_dir)
    torch.onnx.export(
        model, inputs,
        osp.join(file_dir, "model.onnx"),
        input_names=input_names,
        output_names=output_names,
        export_params=False,
        training=torch.onnx.TrainingMode.EVAL,
        do_constant_folding=False,
        opset_version=14)
    if fp16:
        tofp16model( osp.join(file_dir, "model.onnx"),  osp.join(file_dir, "model.onnx"))
    feed_dict = dict(zip(input_names, inputs))
    np.savez(osp.join(prefix, "inputs.npz"), **feed_dict)

def run_torch(model, inputs):
    model = model.cuda()
    model.eval()
    cu_inputs = []
    for item in inputs:
        cu_inputs.append(item.cuda() if isinstance(item, torch.Tensor) else item)
    def get_runtime():
        tic = time.time()
        _ = model(*cu_inputs)
        torch.cuda.synchronize()
        return (time.time() - tic) * 1000
    with torch.no_grad():
        print("Warming up ...")
        st = time.time()
        while time.time() - st < 1.0:
            get_runtime() # warmup
        times = [get_runtime() for i in range(100)]
        print(f"avg: {np.mean(times)} ms")
        print(f"min: {np.min(times)} ms")
        print(f"max: {np.max(times)} ms")

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("model", type=str)
    parser.add_argument("--bs", type=int, default=1)
    parser.add_argument("--prefix", type=str, default="temp")
    parser.add_argument("--fp16", action="store_true", default=True)
    parser.add_argument("--run_torch", action="store_true", default=False)
    args = parser.parse_args()
    assert (args.model in globals()), "Model {} not found.".format(args.model)

    torch.random.manual_seed(0)
    model, inputs = globals()[args.model](args.bs)

    if args.run_torch:
        if args.fp16:
            model = model.half()
            inputs = [x.half() if torch.is_floating_point(x) else x for x in inputs]
        run_torch(model, inputs)
    else:
        os.makedirs(args.prefix, exist_ok=True)
        torch2onnx(args.prefix, model, inputs, args.fp16)
