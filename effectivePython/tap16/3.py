#!/usr/bin/env python3
#-*- coding: utf-8 -*-

def index_file(handle):
    offset = 0
    for line in handle:
        if line:
            yield offset
        for letter in line:
            offset += 1
            if letter == ' ':
                yield offset

def main():
    with open('./address.txt', 'r') as f:
        it = index_file(f)
        print(list(it)[:3])


main()