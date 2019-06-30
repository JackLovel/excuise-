#!/usr/bin/python3
#-*- coding: utf-8 -*-

import sys
from PyQt5.QtWidgets import QMainWindow, QMenu, QApplication, QAction
from PyQt5.QtGui import QIcon

class Example(QMainWindow):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        menuBar = self.menuBar()
        fileMenu = menuBar.addMenu("文件")

        impMenu = QMenu('重要', self)
        impAct = QAction('重要的邮件', self)
        impMenu.addAction(impAct)

        newAct = QAction('新建', self)
        fileMenu.addAction(newAct)
        fileMenu.addMenu(impMenu)

        self.setGeometry(300, 300, 300, 200)
        self.setWindowTitle('子菜单')
        self.show()


if __name__ == "__main__":
    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())

