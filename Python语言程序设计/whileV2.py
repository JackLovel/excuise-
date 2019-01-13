#!/usr/bin/python3
#-*- coding: utf-8 -*-

s = "PYTHON"
while s != "":
    for c in s:
        if c == "T":
            break
        print(c, end="")
    s = s[:-1]

print()
