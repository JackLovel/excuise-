#!/bin/bash

# 在排档过程中排除 ".txt" 文件
tar --exclude *.txt -cvf arch.tar * 

# 解压
tar -xvf arch.tar 
