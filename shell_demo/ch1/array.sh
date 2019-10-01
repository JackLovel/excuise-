#!/bin/bash

array_var=(test1 test2 test3 test4)

echo ${array_var[0]}
echo ${array_var[*]} # 打印所有值
echo ${#array_var[*]}

declare -A fruits_value
fruits_value=([apple]='100 dollars' [orange]='150 dollars')
echo "Apple costs ${fruits_value[apple]}"
echo ${!fruits_value[@]} # 数组对应的索引
