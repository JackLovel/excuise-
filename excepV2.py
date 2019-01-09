try:
    num = eval(input("Enter a int: "))
    print(num ** 2)

except NameError:
    print("Input is not int")
