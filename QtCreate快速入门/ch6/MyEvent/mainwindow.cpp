#include "mainwindow.h"

#include <QKeyEvent>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    lineEdit = new MyLineEdit(this);
    lineEdit->move(100, 100);

    lineEdit->installEventFilter(this); // 在 Widget 上为 lineEdit安装事件过滤器
}

MainWindow::~MainWindow()
{

}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    qDebug() << tr("Widget 键盘按下事件");
}

bool MainWindow::eventFilter(QObject *o, QEvent *e) // 事件过滤器
{
    if (o == lineEdit) {
        if (e->type() == QEvent::KeyPress) {
            qDebug() << tr("Widget 的事件过滤器");
        }
    }

    return QWidget::eventFilter(o, e);
}




















