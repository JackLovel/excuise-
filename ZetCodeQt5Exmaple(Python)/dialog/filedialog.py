#!/usr/bin/python3
#-*- coding: utf-8 -*-

"""
In this example, we select a file withh a QFileDialog and display its contents
in a QTextEdit

Author: JackLovelXX
Data: 2019/7/X
"""

from PyQt5.QtWidgets import (QMainWindow, QTextEdit, QAction, QFileDialog, QApplication)
from PyQt5.QtGui import QIcon
import sys

class Example(QMainWindow):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.textEdit = QTextEdit()

        self.setCentralWidget(self.textEdit)
        self.statusBar()

        openFile = QAction(QIcon('open.png'), '打开', self)
        openFile.setShortcut('ctrl+o')
        openFile.setStatusTip('Open new File')
        openFile.triggered.connect(self.showDialog)

        menubar = self.menuBar()
        fileMenu = menubar.addMenu('&File')
        fileMenu.addAction(openFile)

        self.setGeometry(300, 300, 250, 180)
        self.setWindowTitle('文件对话框')
        self.show()

    def showDialog(self):
        fname = QFileDialog.getOpenFileName(self, 'Open file', '/home')

        if fname[0]:
            # f = open(fname[0], 'r')

            # with f:
            #     data = f.read()
            #     self.textEdit.setText(data)
            with open(fname[0], 'r') as f:
                data = f.read()
                self.textEdit.setText(data)

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())

