#-*- coding:utf-8 -*-

# 求阶乘
def fact(n):
    s = 1
    for i in range(1, n+1):
        s *= i
    return s 

print(fact(10))
