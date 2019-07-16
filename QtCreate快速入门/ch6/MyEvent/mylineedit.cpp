#include "mylineedit.h"

#include <QKeyEvent>
#include <QDebug>

MyLineEdit::MyLineEdit(QWidget *parent) : QLineEdit(parent)
{

}

void MyLineEdit::keyPressEvent(QKeyEvent *e)
{
    qDebug() << tr("MyLineEdit键盘按下事件");
    QLineEdit::keyPressEvent(e);
    e->ignore(); // 忽略该事件
}

bool MyLineEdit::event(QEvent *e) // 事件
{
    if (e->type() == QEvent::KeyPress)
        qDebug() << tr("MyLineEdit的event()函数");
    return QLineEdit::event(e);
}
