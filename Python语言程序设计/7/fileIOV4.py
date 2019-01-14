fname = input("Enter a file name:")

fo = open(fname, "r")

for line in fo.readlines():
    print(line)

fo.close()
