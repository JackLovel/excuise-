#!/usr/bin/python3
#-*- coding: utf-8 -*-

"""
In the example, we draw randomly 1000 red points on the window.

Author: JackLovelxx
Date: 2019/7/1
"""

from PyQt5.QtWidgets import  QWidget,  QApplication
from PyQt5.QtGui import QPainter
from PyQt5.QtCore import Qt
import sys, random


class Example(QWidget):
    def __init__(self):
        super().__init__()

        self.initUI()

    def initUI(self):

        self.setGeometry(300, 300, 280, 170)
        self.setWindowTitle('Points')
        self.show()

    def paintEvent(self, e):
        qp = QPainter()
        qp.begin(self)
        self.drawPoints(qp)
        qp.end()

    def drawPoints(self, qp):
        qp.setPen(Qt.red)
        size = self.size() # current window size

        for i in range(1000):
            x = random.randint(1, size.width()-1)
            y = random.randint(1, size.height()-1)
            qp.drawPoint(x, y)


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())
