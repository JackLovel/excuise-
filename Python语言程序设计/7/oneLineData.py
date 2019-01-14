# read data from file 
# data format: 中国$美国$日本$德国$法国$英国$意大利
# result: ['中国', '美国', '日本', '德国', '法国', '英国', '意大利']

fr = open("oneLine.txt")
txt = fr.read()
ls = txt.split("$")
print(ls)
fr.close()


# write data to file  
# data format: ['中国', '美国', '日本', '德国', '法国', '英国', '意大利']
# result: 中国$美国$日本$德国$法国$英国$意大利

ls = ['中国', '美国', '日本', '德国', '法国', '英国', '意大利']
fw = open('onelineWrite.txt', 'w')
fw.write('$'.join(ls))
fw.close()




