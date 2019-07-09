#!/usr/bin/python3
#-*- coding: utf-8 -*-

"""
In this example, we select a font name and
change the font of a label

Author: JackLovelXX
Data: 2019/7/X
"""

from PyQt5.QtWidgets import (QWidget, QVBoxLayout, QSizePolicy, QLabel, QFontDialog, QApplication,QPushButton)
import sys

class Example(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        vbox = QVBoxLayout()

        btn = QPushButton('Dialog', self);
        btn.setSizePolicy(QSizePolicy.Fixed, QSizePolicy.Fixed)
        btn.move(20, 20)

        vbox.addWidget(btn)
        btn.clicked.connect(self.showDialog)

        self.lbl = QLabel("Knowledge only matters", self)
        self.lbl.move(130, 20)

        vbox.addWidget(self.lbl)
        self.setLayout(vbox)

        self.setGeometry(300, 300, 250, 180)
        self.setWindowTitle('字体对话框')
        self.show()

    def showDialog(self):
        font, ok = QFontDialog.getFont()
        if ok:
            self.lbl.setFont(font)


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())

