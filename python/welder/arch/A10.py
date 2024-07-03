import tvm


class A10:
    def __init__(self):
        self.reg_cap = 65536
        self.smem_cap = 49152
        self.compute_max_core = 72
        self.warp_size = 32
        self.sm_partition = 4
        self.transaction_size = [32, 128]   # in bytes
        self.max_smem_usage = 163 * 1024
        self.bandwidth = [500, 12080]
        self.platform = "CUDA"
        self.compute_capability = "86"
        self.target = tvm.target.cuda(model="A10", arch="sm_86")
        self.cutlass_mma = [16, 8, 16]
