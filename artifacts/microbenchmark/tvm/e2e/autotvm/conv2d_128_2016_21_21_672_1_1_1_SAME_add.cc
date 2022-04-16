//1_7_896_21_1_12
//128_2016_21_21_672_1_1_SAME
//dim3 grid(1, 7, 896);
//dim3 block(21, 1, 12);

#ifdef _WIN32
  using uint = unsigned int;
  using uchar = unsigned char;
  using ushort = unsigned short;
  using int64_t = long long;
  using uint64_t = unsigned long long;
#else
  #define uint unsigned int
  #define uchar unsigned char
  #define ushort unsigned short
  #define int64_t long long
  #define uint64_t unsigned long long
#endif
extern "C" __global__ void __launch_bounds__(252) conv_kernel0(float* __restrict__ placeholder, float* __restrict__ placeholder1, float* __restrict__ T_add, float* __restrict__ input2) {
  float compute[24];
  __shared__ float pad_temp_shared[756];
  __shared__ float placeholder_shared[1152];
  #pragma unroll
  for (int ff_init = 0; ff_init < 2; ++ff_init) {
    compute[(ff_init)] = 0.000000e+00f;
    compute[((ff_init + 6))] = 0.000000e+00f;
    compute[((ff_init + 12))] = 0.000000e+00f;
    compute[((ff_init + 18))] = 0.000000e+00f;
    compute[((ff_init + 2))] = 0.000000e+00f;
    compute[((ff_init + 8))] = 0.000000e+00f;
    compute[((ff_init + 14))] = 0.000000e+00f;
    compute[((ff_init + 20))] = 0.000000e+00f;
    compute[((ff_init + 4))] = 0.000000e+00f;
    compute[((ff_init + 10))] = 0.000000e+00f;
    compute[((ff_init + 16))] = 0.000000e+00f;
    compute[((ff_init + 22))] = 0.000000e+00f;
  }
  for (int rc_outer = 0; rc_outer < 168; ++rc_outer) {
    __syncthreads();
    #pragma unroll
    for (int ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner = 0; ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner < 3; ++ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner) {
      pad_temp_shared[((((((int)threadIdx.z) * 63) + (((int)threadIdx.x) * 3)) + ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner))] = placeholder[((((((((((int)blockIdx.z) / 7) * 889056) + (rc_outer * 5292)) + (((int)threadIdx.z) * 441)) + (((int)blockIdx.y) * 63)) + (((int)threadIdx.x) * 3)) + ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner))];
    }
    #pragma unroll
    for (int ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner1 = 0; ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner1 < 5; ++ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner1) {
      if (((((int)threadIdx.z) * 8) + (((((int)threadIdx.x) * 5) + ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner1) / 12)) < 96) {
        if ((((((int)threadIdx.z) * 96) + (((int)threadIdx.x) * 5)) + ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner1) < 1152) {
          if (((((int)threadIdx.x) * 5) + ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner1) < 96) {
            placeholder_shared[((((((int)threadIdx.z) * 96) + (((int)threadIdx.x) * 5)) + ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner1))] = placeholder1[(((((((((int)blockIdx.z) % 7) * 193536) + (((int)threadIdx.z) * 16128)) + ((((((int)threadIdx.x) * 5) + ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner1) / 12) * 2016)) + (rc_outer * 12)) + (((((int)threadIdx.x) * 5) + ax0_ax1_fused_ax2_fused_ax3_fused_inner_inner_inner1) % 12)))];
          }
        }
      }
    }
    __syncthreads();
    #pragma unroll
    for (int rc_inner = 0; rc_inner < 12; ++rc_inner) {
      #pragma unroll
      for (int ff = 0; ff < 2; ++ff) {
        compute[(ff)] = (compute[(ff)] + (pad_temp_shared[(((rc_inner * 63) + ((int)threadIdx.x)))] * placeholder_shared[((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner))]));
        compute[((ff + 6))] = (compute[((ff + 6))] + (pad_temp_shared[(((rc_inner * 63) + ((int)threadIdx.x)))] * placeholder_shared[(((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner) + 288))]));
        compute[((ff + 12))] = (compute[((ff + 12))] + (pad_temp_shared[(((rc_inner * 63) + ((int)threadIdx.x)))] * placeholder_shared[(((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner) + 576))]));
        compute[((ff + 18))] = (compute[((ff + 18))] + (pad_temp_shared[(((rc_inner * 63) + ((int)threadIdx.x)))] * placeholder_shared[(((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner) + 864))]));
        compute[((ff + 2))] = (compute[((ff + 2))] + (pad_temp_shared[((((rc_inner * 63) + ((int)threadIdx.x)) + 21))] * placeholder_shared[((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner))]));
        compute[((ff + 8))] = (compute[((ff + 8))] + (pad_temp_shared[((((rc_inner * 63) + ((int)threadIdx.x)) + 21))] * placeholder_shared[(((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner) + 288))]));
        compute[((ff + 14))] = (compute[((ff + 14))] + (pad_temp_shared[((((rc_inner * 63) + ((int)threadIdx.x)) + 21))] * placeholder_shared[(((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner) + 576))]));
        compute[((ff + 20))] = (compute[((ff + 20))] + (pad_temp_shared[((((rc_inner * 63) + ((int)threadIdx.x)) + 21))] * placeholder_shared[(((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner) + 864))]));
        compute[((ff + 4))] = (compute[((ff + 4))] + (pad_temp_shared[((((rc_inner * 63) + ((int)threadIdx.x)) + 42))] * placeholder_shared[((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner))]));
        compute[((ff + 10))] = (compute[((ff + 10))] + (pad_temp_shared[((((rc_inner * 63) + ((int)threadIdx.x)) + 42))] * placeholder_shared[(((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner) + 288))]));
        compute[((ff + 16))] = (compute[((ff + 16))] + (pad_temp_shared[((((rc_inner * 63) + ((int)threadIdx.x)) + 42))] * placeholder_shared[(((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner) + 576))]));
        compute[((ff + 22))] = (compute[((ff + 22))] + (pad_temp_shared[((((rc_inner * 63) + ((int)threadIdx.x)) + 42))] * placeholder_shared[(((((((int)threadIdx.z) * 24) + (ff * 12)) + rc_inner) + 864))]));
      }
    }
  }
  #pragma unroll
  for (int ax1_inner_inner_inner = 0; ax1_inner_inner_inner < 2; ++ax1_inner_inner_inner) {
    T_add[((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)))] = (compute[(ax1_inner_inner_inner)] + input2[((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)))]);
    T_add[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 10584))] = (compute[((ax1_inner_inner_inner + 6))] + input2[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 10584))]);
    T_add[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 21168))] = (compute[((ax1_inner_inner_inner + 12))] + input2[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 21168))]);
    T_add[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 31752))] = (compute[((ax1_inner_inner_inner + 18))] + input2[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 31752))]);
    T_add[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 21))] = (compute[((ax1_inner_inner_inner + 2))] + input2[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 21))]);
    T_add[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 10605))] = (compute[((ax1_inner_inner_inner + 8))] + input2[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 10605))]);
    T_add[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 21189))] = (compute[((ax1_inner_inner_inner + 14))] + input2[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 21189))]);
    T_add[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 31773))] = (compute[((ax1_inner_inner_inner + 20))] + input2[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 31773))]);
    T_add[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 42))] = (compute[((ax1_inner_inner_inner + 4))] + input2[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 42))]);
    T_add[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 10626))] = (compute[((ax1_inner_inner_inner + 10))] + input2[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 10626))]);
    T_add[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 21210))] = (compute[((ax1_inner_inner_inner + 16))] + input2[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 21210))]);
    T_add[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 31794))] = (compute[((ax1_inner_inner_inner + 22))] + input2[(((((((((int)blockIdx.z) * 42336) + (((int)threadIdx.z) * 882)) + (ax1_inner_inner_inner * 441)) + (((int)blockIdx.y) * 63)) + ((int)threadIdx.x)) + 31794))]);
  }
}

