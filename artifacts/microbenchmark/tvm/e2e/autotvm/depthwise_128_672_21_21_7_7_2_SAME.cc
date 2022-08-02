//1_1_43008_11_11_1
//128_672_21_21_7_2_SAME
//dim3 grid(1, 1, 43008);
//dim3 block(11, 11, 1);

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
extern "C" __global__ void __launch_bounds__(121) depthwise_kernel0(float* __restrict__ placeholder, float* __restrict__ placeholder1, float* __restrict__ DepthwiseConv2d) {
  __shared__ float PaddedInput_shared[1458];
  __shared__ float placeholder_shared[98];
  float PaddedInput_shared_local[98];
  float placeholder_shared_local[98];
  float DepthwiseConv2d_local[2];
  PaddedInput_shared[(((((int)threadIdx.y) * 11) + ((int)threadIdx.x)))] = ((((81 <= ((((int)threadIdx.y) * 11) + ((int)threadIdx.x))) && (3 <= (((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) % 27))) && ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) % 27) < 24)) ? placeholder[(((((((int)blockIdx.z) * 882) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) / 27) * 21)) + (((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) % 27)) - 66))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 121))] = (((3 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 13) % 27)) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 13) % 27) < 24)) ? placeholder[(((((((int)blockIdx.z) * 882) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 121) / 27) * 21)) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 13) % 27)) - 66))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 242))] = (((3 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 26) % 27)) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 26) % 27) < 24)) ? placeholder[(((((((int)blockIdx.z) * 882) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 242) / 27) * 21)) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 26) % 27)) - 66))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 363))] = (((3 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 12) % 27)) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 12) % 27) < 24)) ? placeholder[(((((((int)blockIdx.z) * 882) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 363) / 27) * 21)) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 12) % 27)) - 66))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 484))] = (((3 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 25) % 27)) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 25) % 27) < 24)) ? placeholder[(((((((int)blockIdx.z) * 882) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 484) / 27) * 21)) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 25) % 27)) - 66))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 605))] = ((((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) < 43) && (3 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 11) % 27))) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 11) % 27) < 24)) ? placeholder[(((((((int)blockIdx.z) * 882) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 605) / 27) * 21)) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 11) % 27)) - 66))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 726))] = (((((81 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 726) % 729)) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 726) % 729) < 648)) && (3 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 24) % 27))) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 24) % 27) < 24)) ? placeholder[((((((((int)blockIdx.z) * 882) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 726) / 729) * 441)) + ((((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 726) % 729) / 27) * 21)) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 24) % 27)) - 66))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 847))] = (((3 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 10) % 27)) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 10) % 27) < 24)) ? placeholder[((((((((int)blockIdx.z) * 882) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 847) / 729) * 441)) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 118) / 27) * 21)) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 10) % 27)) - 66))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 968))] = (((3 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 23) % 27)) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 23) % 27) < 24)) ? placeholder[((((((((int)blockIdx.z) * 882) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 968) / 729) * 441)) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 239) / 27) * 21)) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 23) % 27)) - 66))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 1089))] = (((3 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 9) % 27)) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 9) % 27) < 24)) ? placeholder[((((((((int)blockIdx.z) * 882) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 1089) / 729) * 441)) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 360) / 27) * 21)) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 9) % 27)) - 66))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 1210))] = (((3 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 22) % 27)) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 22) % 27) < 24)) ? placeholder[((((((((int)blockIdx.z) * 882) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 1210) / 729) * 441)) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 481) / 27) * 21)) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 22) % 27)) - 66))] : 0.000000e+00f);
  PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 1331))] = ((((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) < 46) && (3 <= ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 8) % 27))) && (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 8) % 27) < 24)) ? placeholder[((((((((int)blockIdx.z) * 882) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 1331) / 729) * 441)) + (((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 602) / 27) * 21)) + ((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 8) % 27)) - 66))] : 0.000000e+00f);
  if (((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) < 6) {
    if (((int)threadIdx.y) < 1) {
      PaddedInput_shared[((((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) + 1452))] = 0.000000e+00f;
    }
  }
  if (((((int)threadIdx.y) * 11) + ((int)threadIdx.x)) < 98) {
    if (((int)threadIdx.y) < 9) {
      placeholder_shared[(((((int)threadIdx.y) * 11) + ((int)threadIdx.x)))] = placeholder1[(((((((int)blockIdx.z) % 336) * 98) + (((int)threadIdx.y) * 11)) + ((int)threadIdx.x)))];
    }
  }
  __syncthreads();
  PaddedInput_shared_local[(0)] = PaddedInput_shared[(((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)))];
  PaddedInput_shared_local[(49)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 729))];
  PaddedInput_shared_local[(1)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 1))];
  PaddedInput_shared_local[(50)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 730))];
  PaddedInput_shared_local[(2)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 2))];
  PaddedInput_shared_local[(51)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 731))];
  PaddedInput_shared_local[(3)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 3))];
  PaddedInput_shared_local[(52)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 732))];
  PaddedInput_shared_local[(4)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 4))];
  PaddedInput_shared_local[(53)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 733))];
  PaddedInput_shared_local[(5)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 5))];
  PaddedInput_shared_local[(54)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 734))];
  PaddedInput_shared_local[(6)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 6))];
  PaddedInput_shared_local[(55)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 735))];
  PaddedInput_shared_local[(7)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 27))];
  PaddedInput_shared_local[(56)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 756))];
  PaddedInput_shared_local[(8)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 28))];
  PaddedInput_shared_local[(57)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 757))];
  PaddedInput_shared_local[(9)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 29))];
  PaddedInput_shared_local[(58)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 758))];
  PaddedInput_shared_local[(10)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 30))];
  PaddedInput_shared_local[(59)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 759))];
  PaddedInput_shared_local[(11)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 31))];
  PaddedInput_shared_local[(60)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 760))];
  PaddedInput_shared_local[(12)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 32))];
  PaddedInput_shared_local[(61)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 761))];
  PaddedInput_shared_local[(13)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 33))];
  PaddedInput_shared_local[(62)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 762))];
  PaddedInput_shared_local[(14)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 54))];
  PaddedInput_shared_local[(63)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 783))];
  PaddedInput_shared_local[(15)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 55))];
  PaddedInput_shared_local[(64)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 784))];
  PaddedInput_shared_local[(16)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 56))];
  PaddedInput_shared_local[(65)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 785))];
  PaddedInput_shared_local[(17)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 57))];
  PaddedInput_shared_local[(66)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 786))];
  PaddedInput_shared_local[(18)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 58))];
  PaddedInput_shared_local[(67)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 787))];
  PaddedInput_shared_local[(19)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 59))];
  PaddedInput_shared_local[(68)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 788))];
  PaddedInput_shared_local[(20)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 60))];
  PaddedInput_shared_local[(69)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 789))];
  PaddedInput_shared_local[(21)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 81))];
  PaddedInput_shared_local[(70)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 810))];
  PaddedInput_shared_local[(22)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 82))];
  PaddedInput_shared_local[(71)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 811))];
  PaddedInput_shared_local[(23)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 83))];
  PaddedInput_shared_local[(72)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 812))];
  PaddedInput_shared_local[(24)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 84))];
  PaddedInput_shared_local[(73)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 813))];
  PaddedInput_shared_local[(25)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 85))];
  PaddedInput_shared_local[(74)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 814))];
  PaddedInput_shared_local[(26)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 86))];
  PaddedInput_shared_local[(75)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 815))];
  PaddedInput_shared_local[(27)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 87))];
  PaddedInput_shared_local[(76)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 816))];
  PaddedInput_shared_local[(28)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 108))];
  PaddedInput_shared_local[(77)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 837))];
  PaddedInput_shared_local[(29)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 109))];
  PaddedInput_shared_local[(78)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 838))];
  PaddedInput_shared_local[(30)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 110))];
  PaddedInput_shared_local[(79)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 839))];
  PaddedInput_shared_local[(31)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 111))];
  PaddedInput_shared_local[(80)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 840))];
  PaddedInput_shared_local[(32)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 112))];
  PaddedInput_shared_local[(81)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 841))];
  PaddedInput_shared_local[(33)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 113))];
  PaddedInput_shared_local[(82)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 842))];
  PaddedInput_shared_local[(34)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 114))];
  PaddedInput_shared_local[(83)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 843))];
  PaddedInput_shared_local[(35)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 135))];
  PaddedInput_shared_local[(84)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 864))];
  PaddedInput_shared_local[(36)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 136))];
  PaddedInput_shared_local[(85)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 865))];
  PaddedInput_shared_local[(37)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 137))];
  PaddedInput_shared_local[(86)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 866))];
  PaddedInput_shared_local[(38)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 138))];
  PaddedInput_shared_local[(87)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 867))];
  PaddedInput_shared_local[(39)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 139))];
  PaddedInput_shared_local[(88)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 868))];
  PaddedInput_shared_local[(40)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 140))];
  PaddedInput_shared_local[(89)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 869))];
  PaddedInput_shared_local[(41)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 141))];
  PaddedInput_shared_local[(90)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 870))];
  PaddedInput_shared_local[(42)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 162))];
  PaddedInput_shared_local[(91)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 891))];
  PaddedInput_shared_local[(43)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 163))];
  PaddedInput_shared_local[(92)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 892))];
  PaddedInput_shared_local[(44)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 164))];
  PaddedInput_shared_local[(93)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 893))];
  PaddedInput_shared_local[(45)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 165))];
  PaddedInput_shared_local[(94)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 894))];
  PaddedInput_shared_local[(46)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 166))];
  PaddedInput_shared_local[(95)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 895))];
  PaddedInput_shared_local[(47)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 167))];
  PaddedInput_shared_local[(96)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 896))];
  PaddedInput_shared_local[(48)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 168))];
  PaddedInput_shared_local[(97)] = PaddedInput_shared[((((((int)threadIdx.y) * 54) + (((int)threadIdx.x) * 2)) + 897))];
  placeholder_shared_local[(0)] = placeholder_shared[(0)];
  placeholder_shared_local[(49)] = placeholder_shared[(49)];
  placeholder_shared_local[(1)] = placeholder_shared[(1)];
  placeholder_shared_local[(50)] = placeholder_shared[(50)];
  placeholder_shared_local[(2)] = placeholder_shared[(2)];
  placeholder_shared_local[(51)] = placeholder_shared[(51)];
  placeholder_shared_local[(3)] = placeholder_shared[(3)];
  placeholder_shared_local[(52)] = placeholder_shared[(52)];
  placeholder_shared_local[(4)] = placeholder_shared[(4)];
  placeholder_shared_local[(53)] = placeholder_shared[(53)];
  placeholder_shared_local[(5)] = placeholder_shared[(5)];
  placeholder_shared_local[(54)] = placeholder_shared[(54)];
  placeholder_shared_local[(6)] = placeholder_shared[(6)];
  placeholder_shared_local[(55)] = placeholder_shared[(55)];
  placeholder_shared_local[(7)] = placeholder_shared[(7)];
  placeholder_shared_local[(56)] = placeholder_shared[(56)];
  placeholder_shared_local[(8)] = placeholder_shared[(8)];
  placeholder_shared_local[(57)] = placeholder_shared[(57)];
  placeholder_shared_local[(9)] = placeholder_shared[(9)];
  placeholder_shared_local[(58)] = placeholder_shared[(58)];
  placeholder_shared_local[(10)] = placeholder_shared[(10)];
  placeholder_shared_local[(59)] = placeholder_shared[(59)];
  placeholder_shared_local[(11)] = placeholder_shared[(11)];
  placeholder_shared_local[(60)] = placeholder_shared[(60)];
  placeholder_shared_local[(12)] = placeholder_shared[(12)];
  placeholder_shared_local[(61)] = placeholder_shared[(61)];
  placeholder_shared_local[(13)] = placeholder_shared[(13)];
  placeholder_shared_local[(62)] = placeholder_shared[(62)];
  placeholder_shared_local[(14)] = placeholder_shared[(14)];
  placeholder_shared_local[(63)] = placeholder_shared[(63)];
  placeholder_shared_local[(15)] = placeholder_shared[(15)];
  placeholder_shared_local[(64)] = placeholder_shared[(64)];
  placeholder_shared_local[(16)] = placeholder_shared[(16)];
  placeholder_shared_local[(65)] = placeholder_shared[(65)];
  placeholder_shared_local[(17)] = placeholder_shared[(17)];
  placeholder_shared_local[(66)] = placeholder_shared[(66)];
  placeholder_shared_local[(18)] = placeholder_shared[(18)];
  placeholder_shared_local[(67)] = placeholder_shared[(67)];
  placeholder_shared_local[(19)] = placeholder_shared[(19)];
  placeholder_shared_local[(68)] = placeholder_shared[(68)];
  placeholder_shared_local[(20)] = placeholder_shared[(20)];
  placeholder_shared_local[(69)] = placeholder_shared[(69)];
  placeholder_shared_local[(21)] = placeholder_shared[(21)];
  placeholder_shared_local[(70)] = placeholder_shared[(70)];
  placeholder_shared_local[(22)] = placeholder_shared[(22)];
  placeholder_shared_local[(71)] = placeholder_shared[(71)];
  placeholder_shared_local[(23)] = placeholder_shared[(23)];
  placeholder_shared_local[(72)] = placeholder_shared[(72)];
  placeholder_shared_local[(24)] = placeholder_shared[(24)];
  placeholder_shared_local[(73)] = placeholder_shared[(73)];
  placeholder_shared_local[(25)] = placeholder_shared[(25)];
  placeholder_shared_local[(74)] = placeholder_shared[(74)];
  placeholder_shared_local[(26)] = placeholder_shared[(26)];
  placeholder_shared_local[(75)] = placeholder_shared[(75)];
  placeholder_shared_local[(27)] = placeholder_shared[(27)];
  placeholder_shared_local[(76)] = placeholder_shared[(76)];
  placeholder_shared_local[(28)] = placeholder_shared[(28)];
  placeholder_shared_local[(77)] = placeholder_shared[(77)];
  placeholder_shared_local[(29)] = placeholder_shared[(29)];
  placeholder_shared_local[(78)] = placeholder_shared[(78)];
  placeholder_shared_local[(30)] = placeholder_shared[(30)];
  placeholder_shared_local[(79)] = placeholder_shared[(79)];
  placeholder_shared_local[(31)] = placeholder_shared[(31)];
  placeholder_shared_local[(80)] = placeholder_shared[(80)];
  placeholder_shared_local[(32)] = placeholder_shared[(32)];
  placeholder_shared_local[(81)] = placeholder_shared[(81)];
  placeholder_shared_local[(33)] = placeholder_shared[(33)];
  placeholder_shared_local[(82)] = placeholder_shared[(82)];
  placeholder_shared_local[(34)] = placeholder_shared[(34)];
  placeholder_shared_local[(83)] = placeholder_shared[(83)];
  placeholder_shared_local[(35)] = placeholder_shared[(35)];
  placeholder_shared_local[(84)] = placeholder_shared[(84)];
  placeholder_shared_local[(36)] = placeholder_shared[(36)];
  placeholder_shared_local[(85)] = placeholder_shared[(85)];
  placeholder_shared_local[(37)] = placeholder_shared[(37)];
  placeholder_shared_local[(86)] = placeholder_shared[(86)];
  placeholder_shared_local[(38)] = placeholder_shared[(38)];
  placeholder_shared_local[(87)] = placeholder_shared[(87)];
  placeholder_shared_local[(39)] = placeholder_shared[(39)];
  placeholder_shared_local[(88)] = placeholder_shared[(88)];
  placeholder_shared_local[(40)] = placeholder_shared[(40)];
  placeholder_shared_local[(89)] = placeholder_shared[(89)];
  placeholder_shared_local[(41)] = placeholder_shared[(41)];
  placeholder_shared_local[(90)] = placeholder_shared[(90)];
  placeholder_shared_local[(42)] = placeholder_shared[(42)];
  placeholder_shared_local[(91)] = placeholder_shared[(91)];
  placeholder_shared_local[(43)] = placeholder_shared[(43)];
  placeholder_shared_local[(92)] = placeholder_shared[(92)];
  placeholder_shared_local[(44)] = placeholder_shared[(44)];
  placeholder_shared_local[(93)] = placeholder_shared[(93)];
  placeholder_shared_local[(45)] = placeholder_shared[(45)];
  placeholder_shared_local[(94)] = placeholder_shared[(94)];
  placeholder_shared_local[(46)] = placeholder_shared[(46)];
  placeholder_shared_local[(95)] = placeholder_shared[(95)];
  placeholder_shared_local[(47)] = placeholder_shared[(47)];
  placeholder_shared_local[(96)] = placeholder_shared[(96)];
  placeholder_shared_local[(48)] = placeholder_shared[(48)];
  placeholder_shared_local[(97)] = placeholder_shared[(97)];
  DepthwiseConv2d_local[(0)] = 0.000000e+00f;
  DepthwiseConv2d_local[(1)] = 0.000000e+00f;
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(0)] * placeholder_shared_local[(0)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(49)] * placeholder_shared_local[(49)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(1)] * placeholder_shared_local[(1)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(50)] * placeholder_shared_local[(50)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(2)] * placeholder_shared_local[(2)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(51)] * placeholder_shared_local[(51)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(3)] * placeholder_shared_local[(3)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(52)] * placeholder_shared_local[(52)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(4)] * placeholder_shared_local[(4)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(53)] * placeholder_shared_local[(53)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(5)] * placeholder_shared_local[(5)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(54)] * placeholder_shared_local[(54)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(6)] * placeholder_shared_local[(6)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(55)] * placeholder_shared_local[(55)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(7)] * placeholder_shared_local[(7)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(56)] * placeholder_shared_local[(56)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(8)] * placeholder_shared_local[(8)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(57)] * placeholder_shared_local[(57)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(9)] * placeholder_shared_local[(9)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(58)] * placeholder_shared_local[(58)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(10)] * placeholder_shared_local[(10)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(59)] * placeholder_shared_local[(59)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(11)] * placeholder_shared_local[(11)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(60)] * placeholder_shared_local[(60)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(12)] * placeholder_shared_local[(12)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(61)] * placeholder_shared_local[(61)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(13)] * placeholder_shared_local[(13)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(62)] * placeholder_shared_local[(62)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(14)] * placeholder_shared_local[(14)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(63)] * placeholder_shared_local[(63)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(15)] * placeholder_shared_local[(15)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(64)] * placeholder_shared_local[(64)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(16)] * placeholder_shared_local[(16)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(65)] * placeholder_shared_local[(65)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(17)] * placeholder_shared_local[(17)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(66)] * placeholder_shared_local[(66)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(18)] * placeholder_shared_local[(18)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(67)] * placeholder_shared_local[(67)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(19)] * placeholder_shared_local[(19)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(68)] * placeholder_shared_local[(68)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(20)] * placeholder_shared_local[(20)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(69)] * placeholder_shared_local[(69)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(21)] * placeholder_shared_local[(21)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(70)] * placeholder_shared_local[(70)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(22)] * placeholder_shared_local[(22)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(71)] * placeholder_shared_local[(71)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(23)] * placeholder_shared_local[(23)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(72)] * placeholder_shared_local[(72)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(24)] * placeholder_shared_local[(24)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(73)] * placeholder_shared_local[(73)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(25)] * placeholder_shared_local[(25)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(74)] * placeholder_shared_local[(74)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(26)] * placeholder_shared_local[(26)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(75)] * placeholder_shared_local[(75)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(27)] * placeholder_shared_local[(27)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(76)] * placeholder_shared_local[(76)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(28)] * placeholder_shared_local[(28)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(77)] * placeholder_shared_local[(77)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(29)] * placeholder_shared_local[(29)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(78)] * placeholder_shared_local[(78)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(30)] * placeholder_shared_local[(30)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(79)] * placeholder_shared_local[(79)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(31)] * placeholder_shared_local[(31)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(80)] * placeholder_shared_local[(80)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(32)] * placeholder_shared_local[(32)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(81)] * placeholder_shared_local[(81)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(33)] * placeholder_shared_local[(33)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(82)] * placeholder_shared_local[(82)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(34)] * placeholder_shared_local[(34)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(83)] * placeholder_shared_local[(83)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(35)] * placeholder_shared_local[(35)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(84)] * placeholder_shared_local[(84)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(36)] * placeholder_shared_local[(36)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(85)] * placeholder_shared_local[(85)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(37)] * placeholder_shared_local[(37)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(86)] * placeholder_shared_local[(86)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(38)] * placeholder_shared_local[(38)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(87)] * placeholder_shared_local[(87)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(39)] * placeholder_shared_local[(39)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(88)] * placeholder_shared_local[(88)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(40)] * placeholder_shared_local[(40)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(89)] * placeholder_shared_local[(89)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(41)] * placeholder_shared_local[(41)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(90)] * placeholder_shared_local[(90)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(42)] * placeholder_shared_local[(42)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(91)] * placeholder_shared_local[(91)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(43)] * placeholder_shared_local[(43)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(92)] * placeholder_shared_local[(92)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(44)] * placeholder_shared_local[(44)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(93)] * placeholder_shared_local[(93)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(45)] * placeholder_shared_local[(45)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(94)] * placeholder_shared_local[(94)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(46)] * placeholder_shared_local[(46)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(95)] * placeholder_shared_local[(95)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(47)] * placeholder_shared_local[(47)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(96)] * placeholder_shared_local[(96)]));
  DepthwiseConv2d_local[(0)] = (DepthwiseConv2d_local[(0)] + (PaddedInput_shared_local[(48)] * placeholder_shared_local[(48)]));
  DepthwiseConv2d_local[(1)] = (DepthwiseConv2d_local[(1)] + (PaddedInput_shared_local[(97)] * placeholder_shared_local[(97)]));
  DepthwiseConv2d[((((((int)blockIdx.z) * 242) + (((int)threadIdx.y) * 11)) + ((int)threadIdx.x)))] = DepthwiseConv2d_local[(0)];
  DepthwiseConv2d[(((((((int)blockIdx.z) * 242) + (((int)threadIdx.y) * 11)) + ((int)threadIdx.x)) + 121))] = DepthwiseConv2d_local[(1)];
}
