#!/usr/bin/python3 
#-*- coding:utf-8 -*-

import random

random.seed(10)
print(random.random())

print(random.randint(1, 11))

print(random.randrange(10, 100, 10))

# print a to b random's float
print(random.uniform(10, 100))

# choice a item from sequence
print(random.choice([1,2,3,4,5,6,7,8,9]))

# shuffle sequence
s = [1, 2, 3, 4, 5, 6, 7 ,8, 9, 0]
random.shuffle(s)
print(s)

