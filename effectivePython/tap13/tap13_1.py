# close file
handle = open('./data.txt')
try:
    data = handle.read()
    print(data)
finally:
    handle.close()
