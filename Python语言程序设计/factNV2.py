#-*- coding:utf-8 -*-

# 求阶乘
n, s = 10, 100
def fact(n):
    s = 1   # 局部变量 
    for i in range(1, n+1):
        s *= i
    return s 

print(fact(10), s) # s = 100
