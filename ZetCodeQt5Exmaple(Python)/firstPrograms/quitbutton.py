#!/usr/bin/python3
#-*- coding: utf-8 -*-

import sys
from PyQt5.QtWidgets import QApplication, QWidget, \
    QToolTip, QPushButton
from PyQt5.QtGui import QFont


class Example(QWidget):
    def __init__(self):
        super().__init__()

        self.initUI()

    def initUI(self):
        btn = QPushButton('退出', self)
        btn.clicked.connect(QApplication.instance().quit)
        btn.resize(btn.sizeHint())
        btn.move(50, 50)

        self.setGeometry(300, 300, 300, 220)
        self.setWindowTitle('退出按钮')

        self.show()


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = Example()

    sys.exit(app.exec_())