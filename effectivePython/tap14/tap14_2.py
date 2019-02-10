#-*- coding: utf-8 -*-

def divide(a, b):
    try:
        return a / b
    except ZeroDivisionError:
        print('Invalid inputs')
    else:
        print('Result is %.lf' % result)


def main():
    a, b = 1, 0
    divide(a, b)


main()
