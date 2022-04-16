//7_7_256_16_2_4
//128_3_230_230_64_7_2_VALID
//dim3 grid(7, 7, 256);
//dim3 block(16, 2, 4);

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
extern "C" __global__ void __launch_bounds__(128) conv_kernel0(float* __restrict__ placeholder, float* __restrict__ placeholder1, float* __restrict__ compute, float* __restrict__ input2) {
  float compute1[64];
  __shared__ float pad_temp_shared[1369];
  __shared__ float placeholder_shared[1568];
  compute1[(0)] = 0.000000e+00f;
  compute1[(32)] = 0.000000e+00f;
  compute1[(4)] = 0.000000e+00f;
  compute1[(36)] = 0.000000e+00f;
  compute1[(8)] = 0.000000e+00f;
  compute1[(40)] = 0.000000e+00f;
  compute1[(12)] = 0.000000e+00f;
  compute1[(44)] = 0.000000e+00f;
  compute1[(16)] = 0.000000e+00f;
  compute1[(48)] = 0.000000e+00f;
  compute1[(20)] = 0.000000e+00f;
  compute1[(52)] = 0.000000e+00f;
  compute1[(24)] = 0.000000e+00f;
  compute1[(56)] = 0.000000e+00f;
  compute1[(28)] = 0.000000e+00f;
  compute1[(60)] = 0.000000e+00f;
  compute1[(1)] = 0.000000e+00f;
  compute1[(33)] = 0.000000e+00f;
  compute1[(5)] = 0.000000e+00f;
  compute1[(37)] = 0.000000e+00f;
  compute1[(9)] = 0.000000e+00f;
  compute1[(41)] = 0.000000e+00f;
  compute1[(13)] = 0.000000e+00f;
  compute1[(45)] = 0.000000e+00f;
  compute1[(17)] = 0.000000e+00f;
  compute1[(49)] = 0.000000e+00f;
  compute1[(21)] = 0.000000e+00f;
  compute1[(53)] = 0.000000e+00f;
  compute1[(25)] = 0.000000e+00f;
  compute1[(57)] = 0.000000e+00f;
  compute1[(29)] = 0.000000e+00f;
  compute1[(61)] = 0.000000e+00f;
  compute1[(2)] = 0.000000e+00f;
  compute1[(34)] = 0.000000e+00f;
  compute1[(6)] = 0.000000e+00f;
  compute1[(38)] = 0.000000e+00f;
  compute1[(10)] = 0.000000e+00f;
  compute1[(42)] = 0.000000e+00f;
  compute1[(14)] = 0.000000e+00f;
  compute1[(46)] = 0.000000e+00f;
  compute1[(18)] = 0.000000e+00f;
  compute1[(50)] = 0.000000e+00f;
  compute1[(22)] = 0.000000e+00f;
  compute1[(54)] = 0.000000e+00f;
  compute1[(26)] = 0.000000e+00f;
  compute1[(58)] = 0.000000e+00f;
  compute1[(30)] = 0.000000e+00f;
  compute1[(62)] = 0.000000e+00f;
  compute1[(3)] = 0.000000e+00f;
  compute1[(35)] = 0.000000e+00f;
  compute1[(7)] = 0.000000e+00f;
  compute1[(39)] = 0.000000e+00f;
  compute1[(11)] = 0.000000e+00f;
  compute1[(43)] = 0.000000e+00f;
  compute1[(15)] = 0.000000e+00f;
  compute1[(47)] = 0.000000e+00f;
  compute1[(19)] = 0.000000e+00f;
  compute1[(51)] = 0.000000e+00f;
  compute1[(23)] = 0.000000e+00f;
  compute1[(55)] = 0.000000e+00f;
  compute1[(27)] = 0.000000e+00f;
  compute1[(59)] = 0.000000e+00f;
  compute1[(31)] = 0.000000e+00f;
  compute1[(63)] = 0.000000e+00f;
  for (int rc_outer = 0; rc_outer < 3; ++rc_outer) {
    __syncthreads();
    pad_temp_shared[((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)))] = placeholder[((((((((((int)blockIdx.z) >> 1) * 158700) + (rc_outer * 52900)) + (((int)blockIdx.y) * 7360)) + (((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) / 37) * 230)) + (((int)blockIdx.x) * 32)) + ((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) % 37)))];
    pad_temp_shared[(((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 1))] = placeholder[((((((((((int)blockIdx.z) >> 1) * 158700) + (rc_outer * 52900)) + (((int)blockIdx.y) * 7360)) + ((((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 1) / 37) * 230)) + (((int)blockIdx.x) * 32)) + (((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 1) % 37)))];
    pad_temp_shared[(((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 2))] = placeholder[((((((((((int)blockIdx.z) >> 1) * 158700) + (rc_outer * 52900)) + (((int)blockIdx.y) * 7360)) + ((((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 2) / 37) * 230)) + (((int)blockIdx.x) * 32)) + (((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 2) % 37)))];
    if ((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) < 1366) {
      pad_temp_shared[(((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 3))] = placeholder[((((((((((int)blockIdx.z) >> 1) * 158700) + (rc_outer * 52900)) + (((int)blockIdx.y) * 7360)) + ((((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 3) / 37) * 230)) + (((int)blockIdx.x) * 32)) + (((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 3) % 37)))];
    }
    if ((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) < 1365) {
      pad_temp_shared[(((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 4))] = placeholder[((((((((((int)blockIdx.z) >> 1) * 158700) + (rc_outer * 52900)) + (((int)blockIdx.y) * 7360)) + ((((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 4) / 37) * 230)) + (((int)blockIdx.x) * 32)) + (((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 4) % 37)))];
    }
    if ((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) < 1364) {
      pad_temp_shared[(((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 5))] = placeholder[((((((((((int)blockIdx.z) >> 1) * 158700) + (rc_outer * 52900)) + (((int)blockIdx.y) * 7360)) + ((((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 5) / 37) * 230)) + (((int)blockIdx.x) * 32)) + (((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 5) % 37)))];
    }
    if ((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) < 1363) {
      if (((((int)threadIdx.y) * 172) + (((int)threadIdx.x) * 11)) < 337) {
        pad_temp_shared[(((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 6))] = placeholder[((((((((((int)blockIdx.z) >> 1) * 158700) + (rc_outer * 52900)) + (((int)blockIdx.y) * 7360)) + ((((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 6) / 37) * 230)) + (((int)blockIdx.x) * 32)) + (((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 6) % 37)))];
      }
    }
    if ((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) < 1362) {
      if (((((int)threadIdx.y) * 172) + (((int)threadIdx.x) * 11)) < 336) {
        if (((int)threadIdx.x) < 15) {
          pad_temp_shared[(((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 7))] = placeholder[((((((((((int)blockIdx.z) >> 1) * 158700) + (rc_outer * 52900)) + (((int)blockIdx.y) * 7360)) + ((((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 7) / 37) * 230)) + (((int)blockIdx.x) * 32)) + (((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 7) % 37)))];
        }
      }
    }
    if ((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) < 1361) {
      if (((((int)threadIdx.y) * 172) + (((int)threadIdx.x) * 11)) < 335) {
        if (((int)threadIdx.x) < 15) {
          pad_temp_shared[(((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 8))] = placeholder[((((((((((int)blockIdx.z) >> 1) * 158700) + (rc_outer * 52900)) + (((int)blockIdx.y) * 7360)) + ((((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 8) / 37) * 230)) + (((int)blockIdx.x) * 32)) + (((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 8) % 37)))];
        }
      }
    }
    if ((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) < 1360) {
      if (((((int)threadIdx.y) * 172) + (((int)threadIdx.x) * 11)) < 334) {
        if (((int)threadIdx.x) < 15) {
          pad_temp_shared[(((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 9))] = placeholder[((((((((((int)blockIdx.z) >> 1) * 158700) + (rc_outer * 52900)) + (((int)blockIdx.y) * 7360)) + ((((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 9) / 37) * 230)) + (((int)blockIdx.x) * 32)) + (((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 9) % 37)))];
        }
      }
    }
    if ((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) < 1359) {
      if (((((int)threadIdx.y) * 172) + (((int)threadIdx.x) * 11)) < 333) {
        if (((int)threadIdx.x) < 15) {
          pad_temp_shared[(((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 10))] = placeholder[((((((((((int)blockIdx.z) >> 1) * 158700) + (rc_outer * 52900)) + (((int)blockIdx.y) * 7360)) + ((((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 10) / 37) * 230)) + (((int)blockIdx.x) * 32)) + (((((((int)threadIdx.z) * 343) + (((int)threadIdx.y) * 172)) + (((int)threadIdx.x) * 11)) + 10) % 37)))];
        }
      }
    }
    placeholder_shared[((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + (((((int)threadIdx.x) * 13) / 49) * 147)) + (rc_outer * 49)) + ((((int)threadIdx.x) * 13) % 49)))];
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 1) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + (((((int)threadIdx.x) * 13) + 1) / 7)) < 224) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1567) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 391) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 1))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 1) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 1) % 49)))];
            }
          }
        }
      }
    }
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 2) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + (((((int)threadIdx.x) * 13) + 2) / 7)) < 224) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1566) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 390) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 2))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 2) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 2) % 49)))];
            }
          }
        }
      }
    }
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 3) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + (((((int)threadIdx.x) * 13) + 3) / 7)) < 224) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1565) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 389) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 3))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 3) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 3) % 49)))];
            }
          }
        }
      }
    }
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 4) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + (((((int)threadIdx.x) * 13) + 4) / 7)) < 224) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1564) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 388) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 4))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 4) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 4) % 49)))];
            }
          }
        }
      }
    }
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 5) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + (((((int)threadIdx.x) * 13) + 5) / 7)) < 224) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1563) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 387) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 5))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 5) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 5) % 49)))];
            }
          }
        }
      }
    }
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 6) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + (((((int)threadIdx.x) * 13) + 6) / 7)) < 224) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1562) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 386) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 6))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 6) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 6) % 49)))];
            }
          }
        }
      }
    }
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 7) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + ((((int)threadIdx.x) * 13) / 7)) < 223) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1561) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 385) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 7))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 7) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 7) % 49)))];
            }
          }
        }
      }
    }
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 8) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + (((((int)threadIdx.x) * 13) + 8) / 7)) < 224) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1560) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 384) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 8))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 8) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 8) % 49)))];
            }
          }
        }
      }
    }
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 9) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + (((((int)threadIdx.x) * 13) + 9) / 7)) < 224) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1559) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 383) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 9))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 9) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 9) % 49)))];
            }
          }
        }
      }
    }
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 10) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + (((((int)threadIdx.x) * 13) + 10) / 7)) < 224) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1558) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 382) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 10))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 10) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 10) % 49)))];
            }
          }
        }
      }
    }
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 11) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + (((((int)threadIdx.x) * 13) + 11) / 7)) < 224) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1557) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 381) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 11))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 11) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 11) % 49)))];
            }
          }
        }
      }
    }
    if ((((((int)threadIdx.z) * 8) + (((int)threadIdx.y) * 4)) + (((((int)threadIdx.x) * 13) + 12) / 49)) < 32) {
      if ((((((int)threadIdx.z) * 56) + (((int)threadIdx.y) * 28)) + (((((int)threadIdx.x) * 13) + 12) / 7)) < 224) {
        if ((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) < 1556) {
          if (((((int)threadIdx.y) * 196) + (((int)threadIdx.x) * 13)) < 380) {
            if (((int)threadIdx.x) < 15) {
              placeholder_shared[(((((((int)threadIdx.z) * 392) + (((int)threadIdx.y) * 196)) + (((int)threadIdx.x) * 13)) + 12))] = placeholder1[((((((((((int)blockIdx.z) & 1) * 4704) + (((int)threadIdx.z) * 1176)) + (((int)threadIdx.y) * 588)) + ((((((int)threadIdx.x) * 13) + 12) / 49) * 147)) + (rc_outer * 49)) + (((((int)threadIdx.x) * 13) + 12) % 49)))];
            }
          }
        }
      }
    }
    __syncthreads();
    for (int ry_inner = 0; ry_inner < 7; ++ry_inner) {
      compute1[(0)] = (compute1[(0)] + (pad_temp_shared[((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)))] * placeholder_shared[(((((int)threadIdx.z) * 196) + (ry_inner * 7)))]));
      compute1[(32)] = (compute1[(32)] + (pad_temp_shared[((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 784))]));
      compute1[(4)] = (compute1[(4)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 148))] * placeholder_shared[(((((int)threadIdx.z) * 196) + (ry_inner * 7)))]));
      compute1[(36)] = (compute1[(36)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 148))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 784))]));
      compute1[(8)] = (compute1[(8)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 296))] * placeholder_shared[(((((int)threadIdx.z) * 196) + (ry_inner * 7)))]));
      compute1[(40)] = (compute1[(40)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 296))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 784))]));
      compute1[(12)] = (compute1[(12)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 444))] * placeholder_shared[(((((int)threadIdx.z) * 196) + (ry_inner * 7)))]));
      compute1[(44)] = (compute1[(44)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 444))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 784))]));
      compute1[(16)] = (compute1[(16)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 592))] * placeholder_shared[(((((int)threadIdx.z) * 196) + (ry_inner * 7)))]));
      compute1[(48)] = (compute1[(48)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 592))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 784))]));
      compute1[(20)] = (compute1[(20)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 740))] * placeholder_shared[(((((int)threadIdx.z) * 196) + (ry_inner * 7)))]));
      compute1[(52)] = (compute1[(52)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 740))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 784))]));
      compute1[(24)] = (compute1[(24)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 888))] * placeholder_shared[(((((int)threadIdx.z) * 196) + (ry_inner * 7)))]));
      compute1[(56)] = (compute1[(56)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 888))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 784))]));
      compute1[(28)] = (compute1[(28)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1036))] * placeholder_shared[(((((int)threadIdx.z) * 196) + (ry_inner * 7)))]));
      compute1[(60)] = (compute1[(60)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1036))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 784))]));
      compute1[(1)] = (compute1[(1)] + (pad_temp_shared[((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 49))]));
      compute1[(33)] = (compute1[(33)] + (pad_temp_shared[((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 833))]));
      compute1[(5)] = (compute1[(5)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 148))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 49))]));
      compute1[(37)] = (compute1[(37)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 148))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 833))]));
      compute1[(9)] = (compute1[(9)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 296))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 49))]));
      compute1[(41)] = (compute1[(41)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 296))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 833))]));
      compute1[(13)] = (compute1[(13)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 444))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 49))]));
      compute1[(45)] = (compute1[(45)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 444))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 833))]));
      compute1[(17)] = (compute1[(17)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 592))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 49))]));
      compute1[(49)] = (compute1[(49)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 592))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 833))]));
      compute1[(21)] = (compute1[(21)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 740))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 49))]));
      compute1[(53)] = (compute1[(53)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 740))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 833))]));
      compute1[(25)] = (compute1[(25)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 888))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 49))]));
      compute1[(57)] = (compute1[(57)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 888))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 833))]));
      compute1[(29)] = (compute1[(29)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1036))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 49))]));
      compute1[(61)] = (compute1[(61)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1036))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 833))]));
      compute1[(2)] = (compute1[(2)] + (pad_temp_shared[((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 98))]));
      compute1[(34)] = (compute1[(34)] + (pad_temp_shared[((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 882))]));
      compute1[(6)] = (compute1[(6)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 148))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 98))]));
      compute1[(38)] = (compute1[(38)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 148))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 882))]));
      compute1[(10)] = (compute1[(10)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 296))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 98))]));
      compute1[(42)] = (compute1[(42)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 296))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 882))]));
      compute1[(14)] = (compute1[(14)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 444))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 98))]));
      compute1[(46)] = (compute1[(46)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 444))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 882))]));
      compute1[(18)] = (compute1[(18)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 592))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 98))]));
      compute1[(50)] = (compute1[(50)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 592))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 882))]));
      compute1[(22)] = (compute1[(22)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 740))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 98))]));
      compute1[(54)] = (compute1[(54)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 740))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 882))]));
      compute1[(26)] = (compute1[(26)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 888))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 98))]));
      compute1[(58)] = (compute1[(58)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 888))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 882))]));
      compute1[(30)] = (compute1[(30)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1036))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 98))]));
      compute1[(62)] = (compute1[(62)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1036))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 882))]));
      compute1[(3)] = (compute1[(3)] + (pad_temp_shared[((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 147))]));
      compute1[(35)] = (compute1[(35)] + (pad_temp_shared[((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 931))]));
      compute1[(7)] = (compute1[(7)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 148))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 147))]));
      compute1[(39)] = (compute1[(39)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 148))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 931))]));
      compute1[(11)] = (compute1[(11)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 296))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 147))]));
      compute1[(43)] = (compute1[(43)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 296))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 931))]));
      compute1[(15)] = (compute1[(15)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 444))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 147))]));
      compute1[(47)] = (compute1[(47)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 444))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 931))]));
      compute1[(19)] = (compute1[(19)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 592))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 147))]));
      compute1[(51)] = (compute1[(51)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 592))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 931))]));
      compute1[(23)] = (compute1[(23)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 740))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 147))]));
      compute1[(55)] = (compute1[(55)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 740))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 931))]));
      compute1[(27)] = (compute1[(27)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 888))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 147))]));
      compute1[(59)] = (compute1[(59)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 888))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 931))]));
      compute1[(31)] = (compute1[(31)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1036))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 147))]));
      compute1[(63)] = (compute1[(63)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1036))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 931))]));
      compute1[(0)] = (compute1[(0)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 1))]));
      compute1[(32)] = (compute1[(32)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 785))]));
      compute1[(4)] = (compute1[(4)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 149))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 1))]));
      compute1[(36)] = (compute1[(36)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 149))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 785))]));
      compute1[(8)] = (compute1[(8)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 297))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 1))]));
      compute1[(40)] = (compute1[(40)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 297))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 785))]));
      compute1[(12)] = (compute1[(12)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 445))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 1))]));
      compute1[(44)] = (compute1[(44)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 445))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 785))]));
      compute1[(16)] = (compute1[(16)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 593))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 1))]));
      compute1[(48)] = (compute1[(48)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 593))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 785))]));
      compute1[(20)] = (compute1[(20)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 741))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 1))]));
      compute1[(52)] = (compute1[(52)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 741))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 785))]));
      compute1[(24)] = (compute1[(24)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 889))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 1))]));
      compute1[(56)] = (compute1[(56)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 889))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 785))]));
      compute1[(28)] = (compute1[(28)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1037))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 1))]));
      compute1[(60)] = (compute1[(60)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1037))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 785))]));
      compute1[(1)] = (compute1[(1)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 50))]));
      compute1[(33)] = (compute1[(33)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 834))]));
      compute1[(5)] = (compute1[(5)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 149))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 50))]));
      compute1[(37)] = (compute1[(37)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 149))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 834))]));
      compute1[(9)] = (compute1[(9)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 297))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 50))]));
      compute1[(41)] = (compute1[(41)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 297))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 834))]));
      compute1[(13)] = (compute1[(13)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 445))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 50))]));
      compute1[(45)] = (compute1[(45)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 445))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 834))]));
      compute1[(17)] = (compute1[(17)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 593))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 50))]));
      compute1[(49)] = (compute1[(49)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 593))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 834))]));
      compute1[(21)] = (compute1[(21)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 741))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 50))]));
      compute1[(53)] = (compute1[(53)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 741))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 834))]));
      compute1[(25)] = (compute1[(25)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 889))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 50))]));
      compute1[(57)] = (compute1[(57)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 889))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 834))]));
      compute1[(29)] = (compute1[(29)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1037))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 50))]));
      compute1[(61)] = (compute1[(61)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1037))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 834))]));
      compute1[(2)] = (compute1[(2)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 99))]));
      compute1[(34)] = (compute1[(34)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 883))]));
      compute1[(6)] = (compute1[(6)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 149))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 99))]));
      compute1[(38)] = (compute1[(38)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 149))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 883))]));
      compute1[(10)] = (compute1[(10)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 297))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 99))]));
      compute1[(42)] = (compute1[(42)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 297))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 883))]));
      compute1[(14)] = (compute1[(14)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 445))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 99))]));
      compute1[(46)] = (compute1[(46)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 445))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 883))]));
      compute1[(18)] = (compute1[(18)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 593))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 99))]));
      compute1[(50)] = (compute1[(50)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 593))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 883))]));
      compute1[(22)] = (compute1[(22)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 741))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 99))]));
      compute1[(54)] = (compute1[(54)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 741))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 883))]));
      compute1[(26)] = (compute1[(26)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 889))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 99))]));
      compute1[(58)] = (compute1[(58)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 889))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 883))]));
      compute1[(30)] = (compute1[(30)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1037))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 99))]));
      compute1[(62)] = (compute1[(62)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1037))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 883))]));
      compute1[(3)] = (compute1[(3)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 148))]));
      compute1[(35)] = (compute1[(35)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 932))]));
      compute1[(7)] = (compute1[(7)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 149))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 148))]));
      compute1[(39)] = (compute1[(39)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 149))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 932))]));
      compute1[(11)] = (compute1[(11)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 297))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 148))]));
      compute1[(43)] = (compute1[(43)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 297))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 932))]));
      compute1[(15)] = (compute1[(15)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 445))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 148))]));
      compute1[(47)] = (compute1[(47)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 445))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 932))]));
      compute1[(19)] = (compute1[(19)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 593))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 148))]));
      compute1[(51)] = (compute1[(51)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 593))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 932))]));
      compute1[(23)] = (compute1[(23)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 741))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 148))]));
      compute1[(55)] = (compute1[(55)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 741))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 932))]));
      compute1[(27)] = (compute1[(27)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 889))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 148))]));
      compute1[(59)] = (compute1[(59)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 889))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 932))]));
      compute1[(31)] = (compute1[(31)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1037))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 148))]));
      compute1[(63)] = (compute1[(63)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1037))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 932))]));
      compute1[(0)] = (compute1[(0)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 2))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 2))]));
      compute1[(32)] = (compute1[(32)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 2))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 786))]));
      compute1[(4)] = (compute1[(4)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 150))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 2))]));
      compute1[(36)] = (compute1[(36)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 150))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 786))]));
      compute1[(8)] = (compute1[(8)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 298))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 2))]));
      compute1[(40)] = (compute1[(40)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 298))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 786))]));
      compute1[(12)] = (compute1[(12)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 446))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 2))]));
      compute1[(44)] = (compute1[(44)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 446))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 786))]));
      compute1[(16)] = (compute1[(16)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 594))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 2))]));
      compute1[(48)] = (compute1[(48)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 594))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 786))]));
      compute1[(20)] = (compute1[(20)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 742))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 2))]));
      compute1[(52)] = (compute1[(52)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 742))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 786))]));
      compute1[(24)] = (compute1[(24)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 890))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 2))]));
      compute1[(56)] = (compute1[(56)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 890))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 786))]));
      compute1[(28)] = (compute1[(28)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1038))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 2))]));
      compute1[(60)] = (compute1[(60)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1038))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 786))]));
      compute1[(1)] = (compute1[(1)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 2))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 51))]));
      compute1[(33)] = (compute1[(33)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 2))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 835))]));
      compute1[(5)] = (compute1[(5)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 150))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 51))]));
      compute1[(37)] = (compute1[(37)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 150))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 835))]));
      compute1[(9)] = (compute1[(9)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 298))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 51))]));
      compute1[(41)] = (compute1[(41)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 298))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 835))]));
      compute1[(13)] = (compute1[(13)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 446))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 51))]));
      compute1[(45)] = (compute1[(45)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 446))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 835))]));
      compute1[(17)] = (compute1[(17)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 594))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 51))]));
      compute1[(49)] = (compute1[(49)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 594))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 835))]));
      compute1[(21)] = (compute1[(21)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 742))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 51))]));
      compute1[(53)] = (compute1[(53)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 742))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 835))]));
      compute1[(25)] = (compute1[(25)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 890))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 51))]));
      compute1[(57)] = (compute1[(57)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 890))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 835))]));
      compute1[(29)] = (compute1[(29)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1038))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 51))]));
      compute1[(61)] = (compute1[(61)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1038))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 835))]));
      compute1[(2)] = (compute1[(2)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 2))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 100))]));
      compute1[(34)] = (compute1[(34)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 2))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 884))]));
      compute1[(6)] = (compute1[(6)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 150))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 100))]));
      compute1[(38)] = (compute1[(38)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 150))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 884))]));
      compute1[(10)] = (compute1[(10)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 298))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 100))]));
      compute1[(42)] = (compute1[(42)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 298))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 884))]));
      compute1[(14)] = (compute1[(14)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 446))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 100))]));
      compute1[(46)] = (compute1[(46)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 446))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 884))]));
      compute1[(18)] = (compute1[(18)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 594))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 100))]));
      compute1[(50)] = (compute1[(50)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 594))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 884))]));
      compute1[(22)] = (compute1[(22)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 742))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 100))]));
      compute1[(54)] = (compute1[(54)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 742))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 884))]));
      compute1[(26)] = (compute1[(26)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 890))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 100))]));
      compute1[(58)] = (compute1[(58)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 890))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 884))]));
      compute1[(30)] = (compute1[(30)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1038))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 100))]));
      compute1[(62)] = (compute1[(62)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1038))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 884))]));
      compute1[(3)] = (compute1[(3)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 2))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 149))]));
      compute1[(35)] = (compute1[(35)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 2))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 933))]));
      compute1[(7)] = (compute1[(7)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 150))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 149))]));
      compute1[(39)] = (compute1[(39)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 150))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 933))]));
      compute1[(11)] = (compute1[(11)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 298))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 149))]));
      compute1[(43)] = (compute1[(43)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 298))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 933))]));
      compute1[(15)] = (compute1[(15)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 446))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 149))]));
      compute1[(47)] = (compute1[(47)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 446))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 933))]));
      compute1[(19)] = (compute1[(19)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 594))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 149))]));
      compute1[(51)] = (compute1[(51)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 594))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 933))]));
      compute1[(23)] = (compute1[(23)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 742))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 149))]));
      compute1[(55)] = (compute1[(55)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 742))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 933))]));
      compute1[(27)] = (compute1[(27)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 890))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 149))]));
      compute1[(59)] = (compute1[(59)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 890))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 933))]));
      compute1[(31)] = (compute1[(31)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1038))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 149))]));
      compute1[(63)] = (compute1[(63)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1038))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 933))]));
      compute1[(0)] = (compute1[(0)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 3))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 3))]));
      compute1[(32)] = (compute1[(32)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 3))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 787))]));
      compute1[(4)] = (compute1[(4)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 151))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 3))]));
      compute1[(36)] = (compute1[(36)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 151))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 787))]));
      compute1[(8)] = (compute1[(8)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 299))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 3))]));
      compute1[(40)] = (compute1[(40)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 299))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 787))]));
      compute1[(12)] = (compute1[(12)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 447))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 3))]));
      compute1[(44)] = (compute1[(44)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 447))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 787))]));
      compute1[(16)] = (compute1[(16)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 595))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 3))]));
      compute1[(48)] = (compute1[(48)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 595))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 787))]));
      compute1[(20)] = (compute1[(20)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 743))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 3))]));
      compute1[(52)] = (compute1[(52)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 743))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 787))]));
      compute1[(24)] = (compute1[(24)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 891))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 3))]));
      compute1[(56)] = (compute1[(56)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 891))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 787))]));
      compute1[(28)] = (compute1[(28)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1039))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 3))]));
      compute1[(60)] = (compute1[(60)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1039))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 787))]));
      compute1[(1)] = (compute1[(1)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 3))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 52))]));
      compute1[(33)] = (compute1[(33)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 3))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 836))]));
      compute1[(5)] = (compute1[(5)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 151))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 52))]));
      compute1[(37)] = (compute1[(37)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 151))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 836))]));
      compute1[(9)] = (compute1[(9)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 299))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 52))]));
      compute1[(41)] = (compute1[(41)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 299))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 836))]));
      compute1[(13)] = (compute1[(13)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 447))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 52))]));
      compute1[(45)] = (compute1[(45)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 447))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 836))]));
      compute1[(17)] = (compute1[(17)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 595))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 52))]));
      compute1[(49)] = (compute1[(49)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 595))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 836))]));
      compute1[(21)] = (compute1[(21)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 743))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 52))]));
      compute1[(53)] = (compute1[(53)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 743))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 836))]));
      compute1[(25)] = (compute1[(25)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 891))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 52))]));
      compute1[(57)] = (compute1[(57)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 891))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 836))]));
      compute1[(29)] = (compute1[(29)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1039))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 52))]));
      compute1[(61)] = (compute1[(61)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1039))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 836))]));
      compute1[(2)] = (compute1[(2)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 3))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 101))]));
      compute1[(34)] = (compute1[(34)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 3))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 885))]));
      compute1[(6)] = (compute1[(6)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 151))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 101))]));
      compute1[(38)] = (compute1[(38)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 151))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 885))]));
      compute1[(10)] = (compute1[(10)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 299))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 101))]));
      compute1[(42)] = (compute1[(42)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 299))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 885))]));
      compute1[(14)] = (compute1[(14)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 447))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 101))]));
      compute1[(46)] = (compute1[(46)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 447))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 885))]));
      compute1[(18)] = (compute1[(18)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 595))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 101))]));
      compute1[(50)] = (compute1[(50)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 595))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 885))]));
      compute1[(22)] = (compute1[(22)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 743))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 101))]));
      compute1[(54)] = (compute1[(54)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 743))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 885))]));
      compute1[(26)] = (compute1[(26)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 891))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 101))]));
      compute1[(58)] = (compute1[(58)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 891))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 885))]));
      compute1[(30)] = (compute1[(30)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1039))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 101))]));
      compute1[(62)] = (compute1[(62)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1039))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 885))]));
      compute1[(3)] = (compute1[(3)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 3))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 150))]));
      compute1[(35)] = (compute1[(35)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 3))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 934))]));
      compute1[(7)] = (compute1[(7)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 151))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 150))]));
      compute1[(39)] = (compute1[(39)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 151))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 934))]));
      compute1[(11)] = (compute1[(11)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 299))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 150))]));
      compute1[(43)] = (compute1[(43)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 299))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 934))]));
      compute1[(15)] = (compute1[(15)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 447))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 150))]));
      compute1[(47)] = (compute1[(47)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 447))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 934))]));
      compute1[(19)] = (compute1[(19)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 595))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 150))]));
      compute1[(51)] = (compute1[(51)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 595))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 934))]));
      compute1[(23)] = (compute1[(23)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 743))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 150))]));
      compute1[(55)] = (compute1[(55)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 743))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 934))]));
      compute1[(27)] = (compute1[(27)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 891))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 150))]));
      compute1[(59)] = (compute1[(59)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 891))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 934))]));
      compute1[(31)] = (compute1[(31)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1039))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 150))]));
      compute1[(63)] = (compute1[(63)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1039))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 934))]));
      compute1[(0)] = (compute1[(0)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 4))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 4))]));
      compute1[(32)] = (compute1[(32)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 4))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 788))]));
      compute1[(4)] = (compute1[(4)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 152))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 4))]));
      compute1[(36)] = (compute1[(36)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 152))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 788))]));
      compute1[(8)] = (compute1[(8)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 300))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 4))]));
      compute1[(40)] = (compute1[(40)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 300))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 788))]));
      compute1[(12)] = (compute1[(12)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 448))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 4))]));
      compute1[(44)] = (compute1[(44)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 448))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 788))]));
      compute1[(16)] = (compute1[(16)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 596))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 4))]));
      compute1[(48)] = (compute1[(48)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 596))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 788))]));
      compute1[(20)] = (compute1[(20)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 744))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 4))]));
      compute1[(52)] = (compute1[(52)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 744))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 788))]));
      compute1[(24)] = (compute1[(24)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 892))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 4))]));
      compute1[(56)] = (compute1[(56)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 892))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 788))]));
      compute1[(28)] = (compute1[(28)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1040))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 4))]));
      compute1[(60)] = (compute1[(60)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1040))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 788))]));
      compute1[(1)] = (compute1[(1)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 4))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 53))]));
      compute1[(33)] = (compute1[(33)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 4))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 837))]));
      compute1[(5)] = (compute1[(5)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 152))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 53))]));
      compute1[(37)] = (compute1[(37)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 152))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 837))]));
      compute1[(9)] = (compute1[(9)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 300))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 53))]));
      compute1[(41)] = (compute1[(41)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 300))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 837))]));
      compute1[(13)] = (compute1[(13)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 448))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 53))]));
      compute1[(45)] = (compute1[(45)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 448))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 837))]));
      compute1[(17)] = (compute1[(17)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 596))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 53))]));
      compute1[(49)] = (compute1[(49)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 596))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 837))]));
      compute1[(21)] = (compute1[(21)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 744))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 53))]));
      compute1[(53)] = (compute1[(53)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 744))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 837))]));
      compute1[(25)] = (compute1[(25)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 892))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 53))]));
      compute1[(57)] = (compute1[(57)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 892))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 837))]));
      compute1[(29)] = (compute1[(29)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1040))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 53))]));
      compute1[(61)] = (compute1[(61)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1040))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 837))]));
      compute1[(2)] = (compute1[(2)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 4))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 102))]));
      compute1[(34)] = (compute1[(34)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 4))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 886))]));
      compute1[(6)] = (compute1[(6)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 152))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 102))]));
      compute1[(38)] = (compute1[(38)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 152))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 886))]));
      compute1[(10)] = (compute1[(10)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 300))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 102))]));
      compute1[(42)] = (compute1[(42)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 300))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 886))]));
      compute1[(14)] = (compute1[(14)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 448))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 102))]));
      compute1[(46)] = (compute1[(46)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 448))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 886))]));
      compute1[(18)] = (compute1[(18)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 596))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 102))]));
      compute1[(50)] = (compute1[(50)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 596))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 886))]));
      compute1[(22)] = (compute1[(22)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 744))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 102))]));
      compute1[(54)] = (compute1[(54)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 744))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 886))]));
      compute1[(26)] = (compute1[(26)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 892))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 102))]));
      compute1[(58)] = (compute1[(58)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 892))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 886))]));
      compute1[(30)] = (compute1[(30)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1040))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 102))]));
      compute1[(62)] = (compute1[(62)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1040))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 886))]));
      compute1[(3)] = (compute1[(3)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 4))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 151))]));
      compute1[(35)] = (compute1[(35)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 4))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 935))]));
      compute1[(7)] = (compute1[(7)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 152))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 151))]));
      compute1[(39)] = (compute1[(39)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 152))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 935))]));
      compute1[(11)] = (compute1[(11)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 300))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 151))]));
      compute1[(43)] = (compute1[(43)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 300))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 935))]));
      compute1[(15)] = (compute1[(15)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 448))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 151))]));
      compute1[(47)] = (compute1[(47)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 448))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 935))]));
      compute1[(19)] = (compute1[(19)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 596))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 151))]));
      compute1[(51)] = (compute1[(51)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 596))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 935))]));
      compute1[(23)] = (compute1[(23)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 744))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 151))]));
      compute1[(55)] = (compute1[(55)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 744))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 935))]));
      compute1[(27)] = (compute1[(27)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 892))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 151))]));
      compute1[(59)] = (compute1[(59)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 892))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 935))]));
      compute1[(31)] = (compute1[(31)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1040))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 151))]));
      compute1[(63)] = (compute1[(63)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1040))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 935))]));
      compute1[(0)] = (compute1[(0)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 5))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 5))]));
      compute1[(32)] = (compute1[(32)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 5))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 789))]));
      compute1[(4)] = (compute1[(4)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 153))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 5))]));
      compute1[(36)] = (compute1[(36)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 153))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 789))]));
      compute1[(8)] = (compute1[(8)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 301))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 5))]));
      compute1[(40)] = (compute1[(40)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 301))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 789))]));
      compute1[(12)] = (compute1[(12)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 449))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 5))]));
      compute1[(44)] = (compute1[(44)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 449))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 789))]));
      compute1[(16)] = (compute1[(16)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 597))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 5))]));
      compute1[(48)] = (compute1[(48)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 597))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 789))]));
      compute1[(20)] = (compute1[(20)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 745))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 5))]));
      compute1[(52)] = (compute1[(52)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 745))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 789))]));
      compute1[(24)] = (compute1[(24)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 893))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 5))]));
      compute1[(56)] = (compute1[(56)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 893))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 789))]));
      compute1[(28)] = (compute1[(28)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1041))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 5))]));
      compute1[(60)] = (compute1[(60)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1041))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 789))]));
      compute1[(1)] = (compute1[(1)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 5))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 54))]));
      compute1[(33)] = (compute1[(33)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 5))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 838))]));
      compute1[(5)] = (compute1[(5)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 153))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 54))]));
      compute1[(37)] = (compute1[(37)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 153))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 838))]));
      compute1[(9)] = (compute1[(9)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 301))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 54))]));
      compute1[(41)] = (compute1[(41)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 301))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 838))]));
      compute1[(13)] = (compute1[(13)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 449))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 54))]));
      compute1[(45)] = (compute1[(45)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 449))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 838))]));
      compute1[(17)] = (compute1[(17)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 597))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 54))]));
      compute1[(49)] = (compute1[(49)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 597))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 838))]));
      compute1[(21)] = (compute1[(21)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 745))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 54))]));
      compute1[(53)] = (compute1[(53)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 745))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 838))]));
      compute1[(25)] = (compute1[(25)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 893))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 54))]));
      compute1[(57)] = (compute1[(57)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 893))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 838))]));
      compute1[(29)] = (compute1[(29)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1041))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 54))]));
      compute1[(61)] = (compute1[(61)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1041))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 838))]));
      compute1[(2)] = (compute1[(2)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 5))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 103))]));
      compute1[(34)] = (compute1[(34)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 5))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 887))]));
      compute1[(6)] = (compute1[(6)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 153))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 103))]));
      compute1[(38)] = (compute1[(38)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 153))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 887))]));
      compute1[(10)] = (compute1[(10)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 301))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 103))]));
      compute1[(42)] = (compute1[(42)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 301))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 887))]));
      compute1[(14)] = (compute1[(14)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 449))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 103))]));
      compute1[(46)] = (compute1[(46)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 449))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 887))]));
      compute1[(18)] = (compute1[(18)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 597))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 103))]));
      compute1[(50)] = (compute1[(50)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 597))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 887))]));
      compute1[(22)] = (compute1[(22)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 745))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 103))]));
      compute1[(54)] = (compute1[(54)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 745))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 887))]));
      compute1[(26)] = (compute1[(26)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 893))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 103))]));
      compute1[(58)] = (compute1[(58)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 893))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 887))]));
      compute1[(30)] = (compute1[(30)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1041))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 103))]));
      compute1[(62)] = (compute1[(62)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1041))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 887))]));
      compute1[(3)] = (compute1[(3)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 5))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 152))]));
      compute1[(35)] = (compute1[(35)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 5))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 936))]));
      compute1[(7)] = (compute1[(7)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 153))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 152))]));
      compute1[(39)] = (compute1[(39)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 153))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 936))]));
      compute1[(11)] = (compute1[(11)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 301))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 152))]));
      compute1[(43)] = (compute1[(43)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 301))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 936))]));
      compute1[(15)] = (compute1[(15)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 449))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 152))]));
      compute1[(47)] = (compute1[(47)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 449))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 936))]));
      compute1[(19)] = (compute1[(19)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 597))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 152))]));
      compute1[(51)] = (compute1[(51)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 597))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 936))]));
      compute1[(23)] = (compute1[(23)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 745))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 152))]));
      compute1[(55)] = (compute1[(55)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 745))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 936))]));
      compute1[(27)] = (compute1[(27)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 893))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 152))]));
      compute1[(59)] = (compute1[(59)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 893))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 936))]));
      compute1[(31)] = (compute1[(31)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1041))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 152))]));
      compute1[(63)] = (compute1[(63)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1041))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 936))]));
      compute1[(0)] = (compute1[(0)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 6))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 6))]));
      compute1[(32)] = (compute1[(32)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 6))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 790))]));
      compute1[(4)] = (compute1[(4)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 154))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 6))]));
      compute1[(36)] = (compute1[(36)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 154))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 790))]));
      compute1[(8)] = (compute1[(8)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 302))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 6))]));
      compute1[(40)] = (compute1[(40)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 302))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 790))]));
      compute1[(12)] = (compute1[(12)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 450))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 6))]));
      compute1[(44)] = (compute1[(44)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 450))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 790))]));
      compute1[(16)] = (compute1[(16)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 598))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 6))]));
      compute1[(48)] = (compute1[(48)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 598))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 790))]));
      compute1[(20)] = (compute1[(20)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 746))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 6))]));
      compute1[(52)] = (compute1[(52)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 746))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 790))]));
      compute1[(24)] = (compute1[(24)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 894))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 6))]));
      compute1[(56)] = (compute1[(56)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 894))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 790))]));
      compute1[(28)] = (compute1[(28)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1042))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 6))]));
      compute1[(60)] = (compute1[(60)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1042))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 790))]));
      compute1[(1)] = (compute1[(1)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 6))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 55))]));
      compute1[(33)] = (compute1[(33)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 6))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 839))]));
      compute1[(5)] = (compute1[(5)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 154))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 55))]));
      compute1[(37)] = (compute1[(37)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 154))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 839))]));
      compute1[(9)] = (compute1[(9)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 302))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 55))]));
      compute1[(41)] = (compute1[(41)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 302))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 839))]));
      compute1[(13)] = (compute1[(13)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 450))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 55))]));
      compute1[(45)] = (compute1[(45)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 450))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 839))]));
      compute1[(17)] = (compute1[(17)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 598))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 55))]));
      compute1[(49)] = (compute1[(49)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 598))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 839))]));
      compute1[(21)] = (compute1[(21)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 746))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 55))]));
      compute1[(53)] = (compute1[(53)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 746))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 839))]));
      compute1[(25)] = (compute1[(25)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 894))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 55))]));
      compute1[(57)] = (compute1[(57)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 894))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 839))]));
      compute1[(29)] = (compute1[(29)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1042))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 55))]));
      compute1[(61)] = (compute1[(61)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1042))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 839))]));
      compute1[(2)] = (compute1[(2)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 6))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 104))]));
      compute1[(34)] = (compute1[(34)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 6))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 888))]));
      compute1[(6)] = (compute1[(6)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 154))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 104))]));
      compute1[(38)] = (compute1[(38)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 154))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 888))]));
      compute1[(10)] = (compute1[(10)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 302))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 104))]));
      compute1[(42)] = (compute1[(42)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 302))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 888))]));
      compute1[(14)] = (compute1[(14)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 450))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 104))]));
      compute1[(46)] = (compute1[(46)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 450))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 888))]));
      compute1[(18)] = (compute1[(18)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 598))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 104))]));
      compute1[(50)] = (compute1[(50)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 598))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 888))]));
      compute1[(22)] = (compute1[(22)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 746))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 104))]));
      compute1[(54)] = (compute1[(54)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 746))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 888))]));
      compute1[(26)] = (compute1[(26)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 894))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 104))]));
      compute1[(58)] = (compute1[(58)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 894))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 888))]));
      compute1[(30)] = (compute1[(30)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1042))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 104))]));
      compute1[(62)] = (compute1[(62)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1042))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 888))]));
      compute1[(3)] = (compute1[(3)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 6))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 153))]));
      compute1[(35)] = (compute1[(35)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 6))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 937))]));
      compute1[(7)] = (compute1[(7)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 154))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 153))]));
      compute1[(39)] = (compute1[(39)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 154))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 937))]));
      compute1[(11)] = (compute1[(11)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 302))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 153))]));
      compute1[(43)] = (compute1[(43)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 302))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 937))]));
      compute1[(15)] = (compute1[(15)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 450))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 153))]));
      compute1[(47)] = (compute1[(47)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 450))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 937))]));
      compute1[(19)] = (compute1[(19)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 598))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 153))]));
      compute1[(51)] = (compute1[(51)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 598))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 937))]));
      compute1[(23)] = (compute1[(23)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 746))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 153))]));
      compute1[(55)] = (compute1[(55)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 746))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 937))]));
      compute1[(27)] = (compute1[(27)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 894))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 153))]));
      compute1[(59)] = (compute1[(59)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 894))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 937))]));
      compute1[(31)] = (compute1[(31)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1042))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 153))]));
      compute1[(63)] = (compute1[(63)] + (pad_temp_shared[(((((((int)threadIdx.y) * 74) + (ry_inner * 37)) + (((int)threadIdx.x) * 2)) + 1042))] * placeholder_shared[((((((int)threadIdx.z) * 196) + (ry_inner * 7)) + 937))]));
    }
  }
  compute[(((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)))] = max((compute1[(0)] + input2[(((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 200704))] = max((compute1[(32)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 200704))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 224))] = max((compute1[(4)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 224))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 200928))] = max((compute1[(36)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 200928))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 448))] = max((compute1[(8)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 448))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 201152))] = max((compute1[(40)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 201152))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 672))] = max((compute1[(12)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 672))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 201376))] = max((compute1[(44)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 201376))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 896))] = max((compute1[(16)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 896))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 201600))] = max((compute1[(48)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 201600))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 1120))] = max((compute1[(20)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 1120))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 201824))] = max((compute1[(52)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 201824))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 1344))] = max((compute1[(24)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 1344))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 202048))] = max((compute1[(56)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 202048))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 1568))] = max((compute1[(28)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 1568))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 202272))] = max((compute1[(60)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 202272))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 12544))] = max((compute1[(1)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 12544))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 213248))] = max((compute1[(33)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 213248))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 12768))] = max((compute1[(5)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 12768))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 213472))] = max((compute1[(37)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 213472))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 12992))] = max((compute1[(9)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 12992))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 213696))] = max((compute1[(41)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 213696))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 13216))] = max((compute1[(13)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 13216))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 213920))] = max((compute1[(45)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 213920))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 13440))] = max((compute1[(17)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 13440))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 214144))] = max((compute1[(49)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 214144))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 13664))] = max((compute1[(21)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 13664))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 214368))] = max((compute1[(53)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 214368))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 13888))] = max((compute1[(25)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 13888))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 214592))] = max((compute1[(57)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 214592))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 14112))] = max((compute1[(29)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 14112))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 214816))] = max((compute1[(61)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 214816))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 25088))] = max((compute1[(2)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 25088))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 225792))] = max((compute1[(34)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 225792))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 25312))] = max((compute1[(6)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 25312))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 226016))] = max((compute1[(38)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 226016))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 25536))] = max((compute1[(10)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 25536))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 226240))] = max((compute1[(42)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 226240))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 25760))] = max((compute1[(14)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 25760))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 226464))] = max((compute1[(46)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 226464))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 25984))] = max((compute1[(18)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 25984))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 226688))] = max((compute1[(50)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 226688))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 26208))] = max((compute1[(22)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 26208))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 226912))] = max((compute1[(54)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 226912))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 26432))] = max((compute1[(26)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 26432))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 227136))] = max((compute1[(58)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 227136))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 26656))] = max((compute1[(30)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 26656))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 227360))] = max((compute1[(62)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 227360))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 37632))] = max((compute1[(3)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 37632))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 238336))] = max((compute1[(35)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 238336))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 37856))] = max((compute1[(7)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 37856))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 238560))] = max((compute1[(39)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 238560))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 38080))] = max((compute1[(11)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 38080))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 238784))] = max((compute1[(43)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 238784))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 38304))] = max((compute1[(15)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 38304))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 239008))] = max((compute1[(47)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 239008))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 38528))] = max((compute1[(19)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 38528))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 239232))] = max((compute1[(51)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 239232))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 38752))] = max((compute1[(23)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 38752))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 239456))] = max((compute1[(55)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 239456))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 38976))] = max((compute1[(27)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 38976))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 239680))] = max((compute1[(59)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 239680))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 39200))] = max((compute1[(31)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 39200))]), 0.000000e+00f);
  compute[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 239904))] = max((compute1[(63)] + input2[((((((((((int)blockIdx.z) * 401408) + (((int)threadIdx.z) * 50176)) + (((int)blockIdx.y) * 1792)) + (((int)threadIdx.y) * 112)) + (((int)blockIdx.x) * 16)) + ((int)threadIdx.x)) + 239904))]), 0.000000e+00f);
}

