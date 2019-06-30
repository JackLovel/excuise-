#!/usr/bin/python3
#-*- coding: utf-8 -*-

"""
This program creates a checkable menu 

author: xxxx
"""


import sys
from PyQt5.QtWidgets import QMainWindow, QMenu, QApplication, QAction
from PyQt5.QtGui import QIcon

class Example(QMainWindow):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.statusbar = self.statusBar()
        self.statusbar.showMessage('准备')

        menubar = self.menuBar()
        viewMenu = menubar.addMenu('查看')

        viewStatAct = QAction('View statusbar', self, checkable=True)
        viewStatAct.setStatusTip('查看状态栏')
        viewStatAct.setChecked(True)
        viewStatAct.triggered.connect(self.toggleMenu)

        viewMenu.addAction(viewStatAct)

        self.setGeometry(300, 300, 300, 200)
        self.setWindowTitle('点击菜单')
        self.show()

    def toggleMenu(self, state):
        if state:
            self.statusbar.show()
        else:
            self.statusbar.hide()

            
if __name__ == "__main__":
    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())

