#加载飞桨和相关类库
import paddle
import paddle.fluid as fluid
#from paddle import fluid
from paddle.fluid.dygraph.nn import FC
import numpy as np
import os
from PIL import Image


# 如果～/.cache/paddle/dataset/mnist/目录下没有MNIST数据，API会自动将MINST数据下载到该文件夹下
# 设置数据读取器，读取MNIST数据训练集
trainset = paddle.dataset.mnist.train()
# 包装数据读取器，每次读取的数据数量设置为batch_size=8
train_reader = paddle.batch(trainset, batch_size=8)

