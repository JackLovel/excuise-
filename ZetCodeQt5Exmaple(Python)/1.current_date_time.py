#!/usr/bin/python3

from PyQt5.QtCore import QDate, QTime, QDateTime, Qt

now = QDate.currentDate()

print(now.toString(Qt.ISODate))
print(now.toString(Qt.DefaultLocaleLongDate))

datetime = QDateTime.currentDateTime()
print(datetime.toString())

time = QTime.currentTime()
print(time.toString(Qt.DefaultLocaleLongDate))

now = QDateTime.currentDateTime()
print("Local datetime:", now.toString(Qt.ISODate))
print("Universal datetime:", now.toUTC().toString(Qt.ISODate
))
print("The offset from UTC is: {0} seconds".format(now.offsetFromUtc()))

now = QDate.currentDate()
d = QDate(1945,5,7)
print("Day in month: {0}".format(d.daysInMonth()))
print("Day in year: {0}".format(d.daysInYear()))

# example: difference in days
xmas1 = QDate(2016, 12, 24)
xmas2 = QDate(2017, 12, 24)

now = QDate.currentDate()
dayspassed = xmas1.daysTo(now)
print("{0} days have passed ssince last XMas".format(dayspassed))

nofdays = now.daysTo(xmas2)
print("The are {0} days until next XMas".format(nofdays))


