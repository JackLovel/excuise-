fname = input("Enter you file name: ")
fo = open(fname, "r")
txt = fo.read(2)

# 当文本不为空时, 逐行读取2个字符
while txt != "":
    txt = fo.read(2)

fo.close()
