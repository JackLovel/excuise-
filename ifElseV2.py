

score = eval(input("Enter score: "))
if score < 60:
    grade = "level is exist"
elif score < 70:
    grade = "D"
elif score < 80:
    grade = "C"
elif score < 90:
    grade = "B"
elif score < 100:
    grade = "A"
print("Enter score level：{}".format(grade))


