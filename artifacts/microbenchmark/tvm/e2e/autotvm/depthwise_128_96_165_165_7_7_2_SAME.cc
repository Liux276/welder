//1_83_12288_83_1_1
//128_96_165_165_7_2_SAME
//dim3 grid(1, 83, 12288);
//dim3 block(83, 1, 1);

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
extern "C" __global__ void __launch_bounds__(83) depthwise_kernel0(float* __restrict__ placeholder, float* __restrict__ placeholder1, float* __restrict__ DepthwiseConv2d) {
  __shared__ float PaddedInput_shared[1197];
  __shared__ float placeholder_shared[49];
  float PaddedInput_shared_local[49];
  float placeholder_shared_local[49];
  float DepthwiseConv2d_local[1];
  PaddedInput_shared[(((int)threadIdx.x))] = (((2 <= ((int)blockIdx.y)) && (3 <= ((int)threadIdx.x))) ? placeholder[(((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + ((int)threadIdx.x)) - 498))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 83))] = ((2 <= ((int)blockIdx.y)) ? placeholder[(((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + ((int)threadIdx.x)) - 415))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 166))] = ((((3 <= ((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 166) / 171))) && (3 <= ((((int)threadIdx.x) + 166) % 171))) && (((((int)threadIdx.x) + 166) % 171) < 168)) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 166) / 171) * 165)) + ((((int)threadIdx.x) + 166) % 171)) - 498))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 249))] = ((3 <= ((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 249) / 171))) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 249) / 171) * 165)) + (((int)threadIdx.x) + 78)) - 498))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 332))] = ((((3 <= ((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 332) / 171))) && (3 <= ((((int)threadIdx.x) + 161) % 171))) && (((((int)threadIdx.x) + 161) % 171) < 168)) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 332) / 171) * 165)) + ((((int)threadIdx.x) + 161) % 171)) - 498))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 415))] = ((3 <= ((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 415) / 171))) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 415) / 171) * 165)) + (((int)threadIdx.x) + 73)) - 498))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 498))] = ((((3 <= ((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 498) / 171))) && (3 <= ((((int)threadIdx.x) + 156) % 171))) && (((((int)threadIdx.x) + 156) % 171) < 168)) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 498) / 171) * 165)) + ((((int)threadIdx.x) + 156) % 171)) - 498))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 581))] = placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 581) / 171) * 165)) + (((int)threadIdx.x) + 68)) - 498))];
  PaddedInput_shared[((((int)threadIdx.x) + 664))] = ((((((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 664) / 171)) < 168) && (3 <= ((((int)threadIdx.x) + 151) % 171))) && (((((int)threadIdx.x) + 151) % 171) < 168)) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 664) / 171) * 165)) + ((((int)threadIdx.x) + 151) % 171)) - 498))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 747))] = ((((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 747) / 171)) < 168) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 747) / 171) * 165)) + (((int)threadIdx.x) + 63)) - 498))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 830))] = ((((((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 830) / 171)) < 168) && (3 <= ((((int)threadIdx.x) + 146) % 171))) && (((((int)threadIdx.x) + 146) % 171) < 168)) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 830) / 171) * 165)) + ((((int)threadIdx.x) + 146) % 171)) - 498))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 913))] = ((((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 913) / 171)) < 168) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 913) / 171) * 165)) + (((int)threadIdx.x) + 58)) - 498))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 996))] = ((((((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 996) / 171)) < 168) && (3 <= ((((int)threadIdx.x) + 141) % 171))) && (((((int)threadIdx.x) + 141) % 171) < 168)) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 996) / 171) * 165)) + ((((int)threadIdx.x) + 141) % 171)) - 498))] : 0.000000e+00f);
  PaddedInput_shared[((((int)threadIdx.x) + 1079))] = ((((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 1079) / 171)) < 168) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 1079) / 171) * 165)) + (((int)threadIdx.x) + 53)) - 498))] : 0.000000e+00f);
  if (((int)threadIdx.x) < 35) {
    PaddedInput_shared[((((int)threadIdx.x) + 1162))] = (((((((int)blockIdx.y) * 2) + ((((int)threadIdx.x) + 1162) / 171)) < 168) && (((int)threadIdx.x) < 32)) ? placeholder[((((((((int)blockIdx.z) * 27225) + (((int)blockIdx.y) * 330)) + (((((int)threadIdx.x) + 1162) / 171) * 165)) + (((int)threadIdx.x) + 136)) - 498))] : 0.000000e+00f);
  }
  if (((int)threadIdx.x) < 49) {
    placeholder_shared[(((int)threadIdx.x))] = placeholder1[((((((int)blockIdx.z) % 96) * 49) + ((int)threadIdx.x)))];
  }
  __syncthreads();
  PaddedInput_shared_local[(0)] = PaddedInput_shared[((((int)threadIdx.x) * 2))];
  PaddedInput_shared_local[(1)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 1))];
  PaddedInput_shared_local[(2)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 2))];
  PaddedInput_shared_local[(3)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 3))];
  PaddedInput_shared_local[(4)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 4))];
  PaddedInput_shared_local[(5)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 5))];
  PaddedInput_shared_local[(6)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 6))];
  PaddedInput_shared_local[(7)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 171))];
  PaddedInput_shared_local[(8)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 172))];
  PaddedInput_shared_local[(9)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 173))];
  PaddedInput_shared_local[(10)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 174))];
  PaddedInput_shared_local[(11)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 175))];
  PaddedInput_shared_local[(12)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 176))];
  PaddedInput_shared_local[(13)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 177))];
  PaddedInput_shared_local[(14)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 342))];
  PaddedInput_shared_local[(15)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 343))];
  PaddedInput_shared_local[(16)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 344))];
  PaddedInput_shared_local[(17)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 345))];
  PaddedInput_shared_local[(18)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 346))];
  PaddedInput_shared_local[(19)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 347))];
  PaddedInput_shared_local[(20)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 348))];
  PaddedInput_shared_local[(21)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 513))];
  PaddedInput_shared_local[(22)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 514))];
  PaddedInput_shared_local[(23)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 515))];
  PaddedInput_shared_local[(24)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 516))];
  PaddedInput_shared_local[(25)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 517))];
  PaddedInput_shared_local[(26)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 518))];
  PaddedInput_shared_local[(27)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 519))];
  PaddedInput_shared_local[(28)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 684))];
  PaddedInput_shared_local[(29)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 685))];
  PaddedInput_shared_local[(30)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 686))];
  PaddedInput_shared_local[(31)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 687))];
  PaddedInput_shared_local[(32)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 688))];
  PaddedInput_shared_local[(33)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 689))];
  PaddedInput_shared_local[(34)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 690))];
  PaddedInput_shared_local[(35)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 855))];
  PaddedInput_shared_local[(36)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 856))];
  PaddedInput_shared_local[(37)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 857))];
  PaddedInput_shared_local[(38)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 858))];
  PaddedInput_shared_local[(39)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 859))];
  PaddedInput_shared_local[(40)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 860))];
  PaddedInput_shared_local[(41)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 861))];
  PaddedInput_shared_local[(42)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 1026))];
  PaddedInput_shared_local[(43)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 1027))];
  PaddedInput_shared_local[(44)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 1028))];
  PaddedInput_shared_local[(45)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 1029))];
  PaddedInput_shared_local[(46)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 1030))];
  PaddedInput_shared_local[(47)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 1031))];
  PaddedInput_shared_local[(48)] = PaddedInput_shared[(((((int)threadIdx.x) * 2) + 1032))];
  placeholder_shared_local[(0)] = placeholder_shared[(0)];
  placeholder_shared_local[(1)] = placeholder_shared[(1)];
  placeholder_shared_local[(2)] = placeholder_shared[(2)];
  placeholder_shared_local[(3)] = placeholder_shared[(3)];
  placeholder_shared_local[(4)] = placeholder_shared[(4)];
  placeholder_shared_local[(5)] = placeholder_shared[(5)];
  placeholder_shared_local[(6)] = placeholder_shared[(6)];
  placeholder_shared_local[(7)] = placeholder_shared[(7)];
  placeholder_shared_local[(8)] = placeholder_shared[(8)];
  placeholder_shared_local[(9)] = placeholder_shared[(9)];
  placeholder_shared_local[(10)] = placeholder_shared[(10)];
  placeholder_shared_local[(11)] = placeholder_shared[(11)];
  placeholder_shared_local[(12)] = placeholder_shared[(12)];
  placeholder_shared_local[(13)] = placeholder_shared[(13)];
  placeholder_shared_local[(14)] = placeholder_shared[(14)];
  placeholder_shared_local[(15)] = placeholder_shared[(15)];
  placeholder_shared_local[(16)] = placeholder_shared[(16)];
  placeholder_shared_local[(17)] = placeholder_shared[(17)];
  placeholder_shared_local[(18)] = placeholder_shared[(18)];
  placeholder_shared_local[(19)] = placeholder_shared[(19)];
  placeholder_shared_local[(20)] = placeholder_shared[(20)];
  placeholder_shared_local[(21)] = placeholder_shared[(21)];
  placeholder_shared_local[(22)] = placeholder_shared[(22)];
  placeholder_shared_local[(23)] = placeholder_shared[(23)];
  placeholder_shared_local[(24)] = placeholder_shared[(24)];
  placeholder_shared_local[(25)] = placeholder_shared[(25)];
  placeholder_shared_local[(26)] = placeholder_shared[(26)];
  placeholder_shared_local[(27)] = placeholder_shared[(27)];
  placeholder_shared_local[(28)] = placeholder_shared[(28)];
  placeholder_shared_local[(29)] = placeholder_shared[(29)];
  placeholder_shared_local[(30)] = placeholder_shared[(30)];
  placeholder_shared_local[(31)] = placeholder_shared[(31)];
  placeholder_shared_local[(32)] = placeholder_shared[(32)];
  placeholder_shared_local[(33)] = placeholder_shared[(33)];
  placeholder_shared_local[(34)] = placeholder_shared[(34)];
  placeholder_shared_local[(35)] = placeholder_shared[(35)];
  placeholder_shared_local[(36)] = placeholder_shared[(36)];
  placeholder_shared_local[(37)] = placeholder_shared[(37)];
  placeholder_shared_local[(38)] = placeholder_shared[(38)];
  placeholder_shared_local[(39)] = placeholder_shared[(39)];
  placeholder_shared_local[(40)] = placeholder_shared[(40)];
  placeholder_shared_local[(41)] = placeholder_shared[(41)];
  placeholder_shared_local[(42)] = placeholder_shared[(42)];
  placeholder_shared_local[(43)] = placeholder_shared[(43)];
  placeholder_shared_local[(44)] = placeholder_shared[(44)];
  placeholder_shared_local[(45)] = placeholder_shared[(45)];
  placeholder_shared_local[(46)] = placeholder_shared[(46)];
  placeholder_shared_local[(47)] = placeholder_shared[(47)];
  placeholder_shared_local[(48)] = placeholder_shared[(48)];
  DepthwiseConv2d_local[(0)] = 0.000000e+00f;
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(0)] * placeholder_shared_local[(0)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(1)] * placeholder_shared_local[(1)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(2)] * placeholder_shared_local[(2)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(3)] * placeholder_shared_local[(3)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(4)] * placeholder_shared_local[(4)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(5)] * placeholder_shared_local[(5)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(6)] * placeholder_shared_local[(6)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(7)] * placeholder_shared_local[(7)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(8)] * placeholder_shared_local[(8)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(9)] * placeholder_shared_local[(9)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(10)] * placeholder_shared_local[(10)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(11)] * placeholder_shared_local[(11)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(12)] * placeholder_shared_local[(12)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(13)] * placeholder_shared_local[(13)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(14)] * placeholder_shared_local[(14)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(15)] * placeholder_shared_local[(15)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(16)] * placeholder_shared_local[(16)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(17)] * placeholder_shared_local[(17)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(18)] * placeholder_shared_local[(18)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(19)] * placeholder_shared_local[(19)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(20)] * placeholder_shared_local[(20)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(21)] * placeholder_shared_local[(21)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(22)] * placeholder_shared_local[(22)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(23)] * placeholder_shared_local[(23)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(24)] * placeholder_shared_local[(24)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(25)] * placeholder_shared_local[(25)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(26)] * placeholder_shared_local[(26)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(27)] * placeholder_shared_local[(27)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(28)] * placeholder_shared_local[(28)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(29)] * placeholder_shared_local[(29)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(30)] * placeholder_shared_local[(30)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(31)] * placeholder_shared_local[(31)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(32)] * placeholder_shared_local[(32)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(33)] * placeholder_shared_local[(33)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(34)] * placeholder_shared_local[(34)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(35)] * placeholder_shared_local[(35)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(36)] * placeholder_shared_local[(36)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(37)] * placeholder_shared_local[(37)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(38)] * placeholder_shared_local[(38)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(39)] * placeholder_shared_local[(39)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(40)] * placeholder_shared_local[(40)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(41)] * placeholder_shared_local[(41)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(42)] * placeholder_shared_local[(42)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(43)] * placeholder_shared_local[(43)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(44)] * placeholder_shared_local[(44)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(45)] * placeholder_shared_local[(45)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(46)] * placeholder_shared_local[(46)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(47)] * placeholder_shared_local[(47)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(48)] * placeholder_shared_local[(48)]));
  DepthwiseConv2d[((((((int)blockIdx.z) * 6889) + (((int)blockIdx.y) * 83)) + ((int)threadIdx.x)))] = DepthwiseConv2d_local[(0)];
}

