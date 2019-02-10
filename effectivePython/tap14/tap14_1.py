#-*- coding: utf-8 -*-

def divide(a, b):
    try:
        return a / b
    except ZeroDivisionError as e:
        raise ValueError('Invalid inputs') from e

def main():
    a, b = 1, 0
    result = divide(a, b)
    print(result)

main()
