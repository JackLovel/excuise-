def comprime2(a, b):
    is_coprime = True
    for i in range(2, min(a, b) + 1):
        if a % i == 0 and b % i == 0:
            is_coprime = False
            break
    return is_coprime

if __name__ == '__main__':
    a, b = 4, 9
    print(comprime2(a, b));
