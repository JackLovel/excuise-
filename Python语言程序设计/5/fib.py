# coding: utf-8

def fib(n):
    if n == 1 or n == 2:
        return 1
    else :
        return fib(n-1) + fib(n-2)

'''
1 1 2 3 5
'''
def main():
    print("n = 5, fib(n) = {}".format(fib(5)))

main()



