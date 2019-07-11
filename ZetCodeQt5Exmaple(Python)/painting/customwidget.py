#!/usr/bin/python3
#-*- coding: utf-8 -*-

"""
In this example we create a custom widget 

Author: JackLovelxx
Date: 2019/7/1
"""

from PyQt5.QtWidgets import  QWidget,  QSlider,  QApplication, QHBoxLayout, QVBoxLayout
from PyQt5.QtCore import QObject, Qt, pyqtSignal
from PyQt5.QtGui import QPainter, QFont, QColor, QPen
import sys

class Communicate(QObject):
    updateBW = pyqtSignal(int)


class BurningWidget(QWidget):
    def __init__(self):
        super().__init__()

        self.initUI()

    def initUI(self):
        self.setMinimumSize(1, 30)
        self.value = 75
        self.num = [75, 150, 255, 300, 375, 450, 525, 600, 675]

    def setValue(self, value):
        self.value = value

    def paintEvent(self, e):
        qp = QPainter()
        qp.begin(self)
        self.drawWidget(qp)
        qp.end()

    def drawWidget(self, qp):
        MAX_CAPACITY = 700
        OVER_CAPACITY = 750

        size  = self.size()
        w = size.width()
        h = size.height()
        

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())
