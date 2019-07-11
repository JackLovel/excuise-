#!/usr/bin/python3
#-*- coding: utf-8 -*-

"""
This example shows a QCalendarWidget widget.
"""

from PyQt5.QtWidgets import (QWidget, QCalendarWidget, QLabel, QVBoxLayout, QApplication)
from PyQt5.QtCore import QDate
import sys

class Example(QWidget):
    def __init__(self):
        super().__init__()

        self.initUI()

    def initUI(self):
        vbox = QVBoxLayout(self)

        cal = QCalendarWidget(self)
        cal.setGridVisible(True)
        
        cal.clicked[QDate].connect(self.showDate)

        vbox.addWidget(cal)

        self.lbl = QLabel(self)
        date = cal.selectedDate()
        self.lbl.setText(date.toString())

        vbox.addWidget(self.lbl)

        self.setLayout(vbox)

        self.setGeometry(300, 300, 280, 170)
        self.setWindowTitle(str('日历'))
        self.show()

    def showDate(self, date):
        self.lbl.setText(date.toString())


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())

