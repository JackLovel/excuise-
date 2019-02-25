#!/usr/bin/env python3
#-*- coding: utf-8 -*-

def index_words_iter(text):
    if text:
        yield 0
    for index, letter in enumerate(text):
        if letter == ' ':
            yield index + 1


def main():
    address = 'Rour score and seven years ago...'
    result = list(index_words_iter(address))
    print(result[:3])

main()