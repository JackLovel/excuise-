fname = input("Enter your file name:")

fo = open(fname, "r")

for line in fo:
    print(line)

fo.close()
