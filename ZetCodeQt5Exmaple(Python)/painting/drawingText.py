#!/usr/bin/python3
#-*- coding: utf-8 -*-

"""
In this program, we can press on a button with a left mouse

Author: JackLovelxx
Date: 2019/7/1
"""

import sys
from PyQt5.QtWidgets import  QWidget,  QApplication
from PyQt5.QtGui import QPainter, QColor, QFont
from PyQt5.QtCore import Qt


class Example(QWidget):
    def __init__(self):
        super().__init__()

        self.initUI()

    def initUI(self):
        self.text = "你好！"

        self.setGeometry(300, 300, 280, 170)
        self.setWindowTitle('Drawing text')
        self.show()

    def paintEvent(self, e):
        qp = QPainter()
        qp.begin(self)
        self.drawText(e, qp)
        qp.end()

    def drawText(self, e, qp):
        qp.setPen(QColor(168, 34, 3))
        qp.setFont(QFont('Decorative', 10))
        qp.drawText(e.rect(), Qt.AlignCenter, self.text)


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = Example()
    ex.show()
    app.exec_()

