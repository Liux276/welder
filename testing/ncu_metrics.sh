#!/bin/bash
# metrics.sh program metrics_name
program=$1
output_file_name=$2
# Time
metrics="sm__cycles_elapsed.avg,\
sm__cycles_elapsed.avg.per_second,"

# DP
metrics+="sm__sass_thread_inst_executed_op_dadd_pred_on.sum,\
sm__sass_thread_inst_executed_op_dfma_pred_on.sum,\
sm__sass_thread_inst_executed_op_dmul_pred_on.sum,"

# SP
metrics+="sm__sass_thread_inst_executed_op_fadd_pred_on.sum,\
sm__sass_thread_inst_executed_op_ffma_pred_on.sum,\
sm__sass_thread_inst_executed_op_fmul_pred_on.sum,"

# HP
metrics+="sm__sass_thread_inst_executed_op_hadd_pred_on.sum,\
sm__sass_thread_inst_executed_op_hfma_pred_on.sum,\
sm__sass_thread_inst_executed_op_hmul_pred_on.sum,"

# Tensor Core
metrics+="sm__inst_executed_pipe_tensor.sum,"

# DRAM, L2 and L1
metrics+="dram__bytes.sum,\
lts__t_bytes.sum,\
l1tex__t_bytes.sum,"

# achieved occupancy
metrics+="sm__warps_active.avg.pct_of_peak_sustained_active,"

# sm efficiency
metrics+="smsp__cycles_active.avg.pct_of_peak_sustained_elapsed,"

touch $output_file_name'.csv'
chmod +0777 $output_file_name'.csv'
ncu  --metrics $metrics --csv --log-file $output_file_name'.csv' --target-processes all $program
