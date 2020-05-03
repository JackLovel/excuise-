#include "readthread.h"
#include <QFile>
#include <QTextStream>
#include <QTextEdit>
#include <QMetaObject>

ReadThread::ReadThread(QTextEdit *textEdit, QObject *parent) :
    QThread(parent), textEdit(textEdit)
{
}

void ReadThread::stop()
{
    stopped = true;
}

void ReadThread::run() {
    stopped = false; // 线程开始执行设置 stopped 为 false
    QFile file(":/text/test.txt");

    if (!file.open(QIODevice::Text | QIODevice::ReadOnly)) {
        return;
    }

    QTextStream in(&file);
    in.setCodec("UTF-8");
    // 当 stopped 为 true, 或者 atEnd() 为 true 时结束 while 循环
    while(!stopped && !in.atEnd()) {
        QString line = in.readLine();
        QMetaObject::invokeMethod(textEdit, "append", Q_ARG(QString, line));
        QThread::msleep(1); // 暂停 1ms
    }
}
