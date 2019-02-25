#!/usr/bin/env python3
#-*- coding: utf-8 -*-

def index_words(text):
    result = []
    if text:
        result.append(0)
    for index, letter in enumerate(text):
        if letter == ' ':
            result.append(index + 1)
    return result


def main():
    address = 'Four score and seven years ago...'
    result = index_words(address)
    print(result[:3])


main()



















