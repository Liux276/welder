//8192_1_1_256_1_1
//65536_1024_1024
//dim3 grid(8192, 1, 1);
//dim3 block(256, 1, 1);

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
extern "C" __global__ void __launch_bounds__(256) default_function_kernel0(float* __restrict__ A, float* __restrict__ B, float* __restrict__ compute) {
  float compute_local[32];
  __shared__ float A_shared[4096];
  __shared__ float B_shared[2048];
  compute_local[(0)] = 0.000000e+00f;
  compute_local[(4)] = 0.000000e+00f;
  compute_local[(8)] = 0.000000e+00f;
  compute_local[(12)] = 0.000000e+00f;
  compute_local[(16)] = 0.000000e+00f;
  compute_local[(20)] = 0.000000e+00f;
  compute_local[(24)] = 0.000000e+00f;
  compute_local[(28)] = 0.000000e+00f;
  compute_local[(1)] = 0.000000e+00f;
  compute_local[(5)] = 0.000000e+00f;
  compute_local[(9)] = 0.000000e+00f;
  compute_local[(13)] = 0.000000e+00f;
  compute_local[(17)] = 0.000000e+00f;
  compute_local[(21)] = 0.000000e+00f;
  compute_local[(25)] = 0.000000e+00f;
  compute_local[(29)] = 0.000000e+00f;
  compute_local[(2)] = 0.000000e+00f;
  compute_local[(6)] = 0.000000e+00f;
  compute_local[(10)] = 0.000000e+00f;
  compute_local[(14)] = 0.000000e+00f;
  compute_local[(18)] = 0.000000e+00f;
  compute_local[(22)] = 0.000000e+00f;
  compute_local[(26)] = 0.000000e+00f;
  compute_local[(30)] = 0.000000e+00f;
  compute_local[(3)] = 0.000000e+00f;
  compute_local[(7)] = 0.000000e+00f;
  compute_local[(11)] = 0.000000e+00f;
  compute_local[(15)] = 0.000000e+00f;
  compute_local[(19)] = 0.000000e+00f;
  compute_local[(23)] = 0.000000e+00f;
  compute_local[(27)] = 0.000000e+00f;
  compute_local[(31)] = 0.000000e+00f;
  for (int k_outer_outer = 0; k_outer_outer < 32; ++k_outer_outer) {
    __syncthreads();
    ((float4*)(A_shared + ((((int)threadIdx.x) * 4))))[0] = ((float4*)(A + ((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 3) * 1024)) + (k_outer_outer * 32)) + ((((int)threadIdx.x) & 7) * 4)))))[0];
    ((float4*)(A_shared + (((((int)threadIdx.x) * 4) + 1024))))[0] = ((float4*)(A + (((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 3) * 1024)) + (k_outer_outer * 32)) + ((((int)threadIdx.x) & 7) * 4)) + 32768))))[0];
    ((float4*)(A_shared + (((((int)threadIdx.x) * 4) + 2048))))[0] = ((float4*)(A + (((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 3) * 1024)) + (k_outer_outer * 32)) + ((((int)threadIdx.x) & 7) * 4)) + 65536))))[0];
    ((float4*)(A_shared + (((((int)threadIdx.x) * 4) + 3072))))[0] = ((float4*)(A + (((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 3) * 1024)) + (k_outer_outer * 32)) + ((((int)threadIdx.x) & 7) * 4)) + 98304))))[0];
    ((float2*)(B_shared + ((((int)threadIdx.x) * 2))))[0] = ((float2*)(B + (((((k_outer_outer * 32768) + ((((int)threadIdx.x) >> 5) * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 31) * 2)))))[0];
    ((float2*)(B_shared + (((((int)threadIdx.x) * 2) + 512))))[0] = ((float2*)(B + ((((((k_outer_outer * 32768) + ((((int)threadIdx.x) >> 5) * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 31) * 2)) + 8192))))[0];
    ((float2*)(B_shared + (((((int)threadIdx.x) * 2) + 1024))))[0] = ((float2*)(B + ((((((k_outer_outer * 32768) + ((((int)threadIdx.x) >> 5) * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 31) * 2)) + 16384))))[0];
    ((float2*)(B_shared + (((((int)threadIdx.x) * 2) + 1536))))[0] = ((float2*)(B + ((((((k_outer_outer * 32768) + ((((int)threadIdx.x) >> 5) * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 31) * 2)) + 24576))))[0];
    __syncthreads();
    for (int k_outer_inner = 0; k_outer_inner < 8; ++k_outer_inner) {
      compute_local[(0)] = (compute_local[(0)] + (A_shared[((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)))] * B_shared[(((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)))]));
      compute_local[(4)] = (compute_local[(4)] + (A_shared[((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 32))]));
      compute_local[(8)] = (compute_local[(8)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1024))] * B_shared[(((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)))]));
      compute_local[(12)] = (compute_local[(12)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1024))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 32))]));
      compute_local[(16)] = (compute_local[(16)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2048))] * B_shared[(((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)))]));
      compute_local[(20)] = (compute_local[(20)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2048))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 32))]));
      compute_local[(24)] = (compute_local[(24)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3072))] * B_shared[(((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)))]));
      compute_local[(28)] = (compute_local[(28)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3072))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 32))]));
      compute_local[(1)] = (compute_local[(1)] + (A_shared[((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 1))]));
      compute_local[(5)] = (compute_local[(5)] + (A_shared[((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 33))]));
      compute_local[(9)] = (compute_local[(9)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1024))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 1))]));
      compute_local[(13)] = (compute_local[(13)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1024))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 33))]));
      compute_local[(17)] = (compute_local[(17)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2048))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 1))]));
      compute_local[(21)] = (compute_local[(21)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2048))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 33))]));
      compute_local[(25)] = (compute_local[(25)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3072))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 1))]));
      compute_local[(29)] = (compute_local[(29)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3072))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 33))]));
      compute_local[(0)] = (compute_local[(0)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 64))]));
      compute_local[(4)] = (compute_local[(4)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 96))]));
      compute_local[(8)] = (compute_local[(8)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1025))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 64))]));
      compute_local[(12)] = (compute_local[(12)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1025))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 96))]));
      compute_local[(16)] = (compute_local[(16)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2049))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 64))]));
      compute_local[(20)] = (compute_local[(20)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2049))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 96))]));
      compute_local[(24)] = (compute_local[(24)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3073))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 64))]));
      compute_local[(28)] = (compute_local[(28)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3073))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 96))]));
      compute_local[(1)] = (compute_local[(1)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 65))]));
      compute_local[(5)] = (compute_local[(5)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 97))]));
      compute_local[(9)] = (compute_local[(9)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1025))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 65))]));
      compute_local[(13)] = (compute_local[(13)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1025))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 97))]));
      compute_local[(17)] = (compute_local[(17)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2049))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 65))]));
      compute_local[(21)] = (compute_local[(21)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2049))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 97))]));
      compute_local[(25)] = (compute_local[(25)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3073))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 65))]));
      compute_local[(29)] = (compute_local[(29)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3073))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 97))]));
      compute_local[(0)] = (compute_local[(0)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 128))]));
      compute_local[(4)] = (compute_local[(4)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 160))]));
      compute_local[(8)] = (compute_local[(8)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1026))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 128))]));
      compute_local[(12)] = (compute_local[(12)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1026))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 160))]));
      compute_local[(16)] = (compute_local[(16)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2050))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 128))]));
      compute_local[(20)] = (compute_local[(20)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2050))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 160))]));
      compute_local[(24)] = (compute_local[(24)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3074))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 128))]));
      compute_local[(28)] = (compute_local[(28)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3074))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 160))]));
      compute_local[(1)] = (compute_local[(1)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 129))]));
      compute_local[(5)] = (compute_local[(5)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 161))]));
      compute_local[(9)] = (compute_local[(9)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1026))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 129))]));
      compute_local[(13)] = (compute_local[(13)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1026))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 161))]));
      compute_local[(17)] = (compute_local[(17)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2050))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 129))]));
      compute_local[(21)] = (compute_local[(21)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2050))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 161))]));
      compute_local[(25)] = (compute_local[(25)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3074))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 129))]));
      compute_local[(29)] = (compute_local[(29)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3074))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 161))]));
      compute_local[(0)] = (compute_local[(0)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 192))]));
      compute_local[(4)] = (compute_local[(4)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 224))]));
      compute_local[(8)] = (compute_local[(8)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1027))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 192))]));
      compute_local[(12)] = (compute_local[(12)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1027))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 224))]));
      compute_local[(16)] = (compute_local[(16)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2051))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 192))]));
      compute_local[(20)] = (compute_local[(20)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2051))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 224))]));
      compute_local[(24)] = (compute_local[(24)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3075))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 192))]));
      compute_local[(28)] = (compute_local[(28)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3075))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 224))]));
      compute_local[(1)] = (compute_local[(1)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 193))]));
      compute_local[(5)] = (compute_local[(5)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 225))]));
      compute_local[(9)] = (compute_local[(9)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1027))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 193))]));
      compute_local[(13)] = (compute_local[(13)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1027))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 225))]));
      compute_local[(17)] = (compute_local[(17)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2051))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 193))]));
      compute_local[(21)] = (compute_local[(21)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2051))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 225))]));
      compute_local[(25)] = (compute_local[(25)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3075))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 193))]));
      compute_local[(29)] = (compute_local[(29)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3075))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 225))]));
      compute_local[(2)] = (compute_local[(2)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 32))] * B_shared[(((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)))]));
      compute_local[(6)] = (compute_local[(6)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 32))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 32))]));
      compute_local[(10)] = (compute_local[(10)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1056))] * B_shared[(((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)))]));
      compute_local[(14)] = (compute_local[(14)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1056))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 32))]));
      compute_local[(18)] = (compute_local[(18)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2080))] * B_shared[(((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)))]));
      compute_local[(22)] = (compute_local[(22)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2080))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 32))]));
      compute_local[(26)] = (compute_local[(26)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3104))] * B_shared[(((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)))]));
      compute_local[(30)] = (compute_local[(30)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3104))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 32))]));
      compute_local[(3)] = (compute_local[(3)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 32))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 1))]));
      compute_local[(7)] = (compute_local[(7)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 32))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 33))]));
      compute_local[(11)] = (compute_local[(11)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1056))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 1))]));
      compute_local[(15)] = (compute_local[(15)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1056))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 33))]));
      compute_local[(19)] = (compute_local[(19)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2080))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 1))]));
      compute_local[(23)] = (compute_local[(23)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2080))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 33))]));
      compute_local[(27)] = (compute_local[(27)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3104))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 1))]));
      compute_local[(31)] = (compute_local[(31)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3104))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 33))]));
      compute_local[(2)] = (compute_local[(2)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 33))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 64))]));
      compute_local[(6)] = (compute_local[(6)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 33))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 96))]));
      compute_local[(10)] = (compute_local[(10)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1057))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 64))]));
      compute_local[(14)] = (compute_local[(14)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1057))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 96))]));
      compute_local[(18)] = (compute_local[(18)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2081))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 64))]));
      compute_local[(22)] = (compute_local[(22)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2081))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 96))]));
      compute_local[(26)] = (compute_local[(26)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3105))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 64))]));
      compute_local[(30)] = (compute_local[(30)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3105))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 96))]));
      compute_local[(3)] = (compute_local[(3)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 33))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 65))]));
      compute_local[(7)] = (compute_local[(7)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 33))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 97))]));
      compute_local[(11)] = (compute_local[(11)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1057))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 65))]));
      compute_local[(15)] = (compute_local[(15)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1057))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 97))]));
      compute_local[(19)] = (compute_local[(19)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2081))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 65))]));
      compute_local[(23)] = (compute_local[(23)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2081))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 97))]));
      compute_local[(27)] = (compute_local[(27)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3105))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 65))]));
      compute_local[(31)] = (compute_local[(31)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3105))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 97))]));
      compute_local[(2)] = (compute_local[(2)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 34))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 128))]));
      compute_local[(6)] = (compute_local[(6)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 34))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 160))]));
      compute_local[(10)] = (compute_local[(10)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1058))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 128))]));
      compute_local[(14)] = (compute_local[(14)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1058))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 160))]));
      compute_local[(18)] = (compute_local[(18)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2082))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 128))]));
      compute_local[(22)] = (compute_local[(22)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2082))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 160))]));
      compute_local[(26)] = (compute_local[(26)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3106))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 128))]));
      compute_local[(30)] = (compute_local[(30)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3106))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 160))]));
      compute_local[(3)] = (compute_local[(3)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 34))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 129))]));
      compute_local[(7)] = (compute_local[(7)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 34))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 161))]));
      compute_local[(11)] = (compute_local[(11)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1058))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 129))]));
      compute_local[(15)] = (compute_local[(15)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1058))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 161))]));
      compute_local[(19)] = (compute_local[(19)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2082))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 129))]));
      compute_local[(23)] = (compute_local[(23)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2082))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 161))]));
      compute_local[(27)] = (compute_local[(27)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3106))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 129))]));
      compute_local[(31)] = (compute_local[(31)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3106))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 161))]));
      compute_local[(2)] = (compute_local[(2)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 35))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 192))]));
      compute_local[(6)] = (compute_local[(6)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 35))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 224))]));
      compute_local[(10)] = (compute_local[(10)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1059))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 192))]));
      compute_local[(14)] = (compute_local[(14)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1059))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 224))]));
      compute_local[(18)] = (compute_local[(18)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2083))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 192))]));
      compute_local[(22)] = (compute_local[(22)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2083))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 224))]));
      compute_local[(26)] = (compute_local[(26)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3107))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 192))]));
      compute_local[(30)] = (compute_local[(30)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3107))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 224))]));
      compute_local[(3)] = (compute_local[(3)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 35))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 193))]));
      compute_local[(7)] = (compute_local[(7)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 35))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 225))]));
      compute_local[(11)] = (compute_local[(11)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1059))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 193))]));
      compute_local[(15)] = (compute_local[(15)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 1059))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 225))]));
      compute_local[(19)] = (compute_local[(19)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2083))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 193))]));
      compute_local[(23)] = (compute_local[(23)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 2083))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 225))]));
      compute_local[(27)] = (compute_local[(27)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3107))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 193))]));
      compute_local[(31)] = (compute_local[(31)] + (A_shared[(((((((int)threadIdx.x) >> 4) * 64) + (k_outer_inner * 4)) + 3107))] * B_shared[((((k_outer_inner * 256) + ((((int)threadIdx.x) & 15) * 2)) + 225))]));
    }
  }
  for (int x_inner = 0; x_inner < 2; ++x_inner) {
    for (int y_inner = 0; y_inner < 2; ++y_inner) {
      compute[((((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 4) * 2048)) + (x_inner * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 15) * 2)) + y_inner))] = compute_local[(((x_inner * 2) + y_inner))];
      compute[(((((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 4) * 2048)) + (x_inner * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 15) * 2)) + y_inner) + 32))] = compute_local[((((x_inner * 2) + y_inner) + 4))];
      compute[(((((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 4) * 2048)) + (x_inner * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 15) * 2)) + y_inner) + 32768))] = compute_local[((((x_inner * 2) + y_inner) + 8))];
      compute[(((((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 4) * 2048)) + (x_inner * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 15) * 2)) + y_inner) + 32800))] = compute_local[((((x_inner * 2) + y_inner) + 12))];
      compute[(((((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 4) * 2048)) + (x_inner * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 15) * 2)) + y_inner) + 65536))] = compute_local[((((x_inner * 2) + y_inner) + 16))];
      compute[(((((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 4) * 2048)) + (x_inner * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 15) * 2)) + y_inner) + 65568))] = compute_local[((((x_inner * 2) + y_inner) + 20))];
      compute[(((((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 4) * 2048)) + (x_inner * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 15) * 2)) + y_inner) + 98304))] = compute_local[((((x_inner * 2) + y_inner) + 24))];
      compute[(((((((((((int)blockIdx.x) >> 4) * 131072) + ((((int)threadIdx.x) >> 4) * 2048)) + (x_inner * 1024)) + ((((int)blockIdx.x) & 15) * 64)) + ((((int)threadIdx.x) & 15) * 2)) + y_inner) + 98336))] = compute_local[((((x_inner * 2) + y_inner) + 28))];
    }
  }
}

