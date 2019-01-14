# coding;　utf-8

import turtle as t

t.title('自动轨迹绘制')
t.setup(800, 600, 0, 0)
t.pencolor("red")
t.pensize(5)

# read data
# format: distance, [left(0)/right(1)], angle, RGB[x1, x2, x3]
datals = []
f = open("data.txt")
for line in f:
    line = line.replace("\n", "")
    datals.append(list(map(eval, line.split(","))))
f.close()

# auto draw self 
for i in range(len(datals)):
    t.pencolor(datals[i][3], datals[i][4], datals[i][5])
    t.fd(datals[i][0])
    if datals[i][2]:
        t.right(datals[i][2])
    else:
        t.left(datals[i][2])




