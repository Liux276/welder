# N CI H W CO KW KH S D P 
CUDA_VISIBLE_DEVICES=0 python3 $1/conv2d_tuning.py 128 1024 14 14 2048 1 1 2 1 VALID $2
CUDA_VISIBLE_DEVICES=0 python3 $1/conv2d_tuning.py 256 1024 14 14 2048 1 1 2 1 VALID $2
CUDA_VISIBLE_DEVICES=0 python3 $1/conv2d_tuning.py 512 1024 14 14 2048 1 1 2 1 VALID $2
CUDA_VISIBLE_DEVICES=0 python3 $1/conv2d_tuning.py 1024 1024 14 14 2048 1 1 2 1 VALID $2
CUDA_VISIBLE_DEVICES=0 python3 $1/conv2d_tuning.py 2048 1024 14 14 2048 1 1 2 1 VALID $2
CUDA_VISIBLE_DEVICES=0 python3 $1/conv2d_tuning.py 4096 1024 14 14 2048 1 1 2 1 VALID $2
CUDA_VISIBLE_DEVICES=0 python3 $1/conv2d_tuning.py 8192 1024 14 14 2048 1 1 2 1 VALID $2