#!/usr/bin/python3
#-*- coding: utf-8 -*-

"""
This program creates a checkable menu 

author: xxxx
"""


import sys
from PyQt5.QtWidgets import QMainWindow, QMenu, QApplication, QAction, qApp


class Example(QMainWindow):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.setGeometry(300, 300, 300, 200)
        self.setWindowTitle('Context menu')
        self.show()

    def contextMenuEvent(self, event):
        cmenu = QMenu(self)

        newAct = cmenu.addAction("新建")
        opnAct = cmenu.addAction("打开")
        quitAct = cmenu.addAction("退出")

        action = cmenu.exec_(self.mapToGlobal(event.pos()))

        if action == quitAct:
            qApp.quit()


if __name__ == "__main__":
    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())

