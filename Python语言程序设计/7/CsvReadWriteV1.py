# read data from CSV file

fo = open("csv_data.csv")
ls = []
for line in fo:
    line = line.replace("\n", "")
    ls.append(line.split(","))

print(ls)

fo.close()


# write data to CSV file
ls = [[2019], [1], [13]] 
fw = open('csv_write.csv', 'w')

for item in ls:
    fw.write(','.join(str(item)) + '\n')

fw.close()
