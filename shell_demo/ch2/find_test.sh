#!/bin/bash

find . -name '*.txt' -o -name '*.pdf'  -print
find . ! -name "*.py" 

# 列出所有目录
find . -type d -print  

# 列出所有文件
find . -type f -print

# 列出所有符号链接
find . -type l -print
