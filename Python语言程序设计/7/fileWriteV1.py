fo = open("output.txt", "w+")

ls = ["china", "American", "France"]

fo.writelines(ls) #  join "ls" list item that write to file

fo.seek(0)
for line in fo:
    print(line)

fo.close()







