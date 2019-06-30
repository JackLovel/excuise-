#!/usr/bin/python3
#-*- coding: utf-8 -*-

"""
This program creates a toolbar

author: xxxx
"""


import sys
from PyQt5.QtWidgets import QMainWindow, QTextEdit, QApplication, QAction
from PyQt5.QtGui import QIcon


class Example(QMainWindow):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        textEdit = QTextEdit()
        self.setCentralWidget(textEdit)

        exitAct = QAction(QIcon('exit.png'), '退出', self)
        exitAct.setShortcut('CTRL+Q')
        exitAct.setStatusTip('退出应用')
        exitAct.triggered.connect(self.close)

        self.statusBar() # 添加 状态栏 部件

        menubar = self.menuBar()
        fileMenu = menubar.addMenu("文件")
        fileMenu.addAction(exitAct)

        toolbar = self.addToolBar('Exit')
        toolbar.addAction(exitAct)

        self.setGeometry(300, 300, 500, 400)
        self.setWindowTitle('主窗口')
        self.show()


if __name__ == "__main__":
    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())

