# coding: utf-8

def rvs(s):
    '''string reverse'''
    if s == "":
        return s
    else :
        return rvs(s[1:]) + s[0]

def main():
    str = "string reverse"
    print(rvs(str))

main()
