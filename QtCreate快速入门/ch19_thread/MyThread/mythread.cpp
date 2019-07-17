#include "mythread.h"

MyThread::MyThread(QObject *parent) : QThread(parent)
{
    stopped = false;
}

void MyThread::run()
{
    qreal i = 0;
    while(!stopped) {
        // 如果 stopped 为false，就每隔1秒打印一次字符串
        qDebug() << QString("in MyThread: %1").arg(i);
        msleep(1000);
        i++;
    }

    stopped = false;
}

void MyThread::stop()
{
    // 结束线程
    stopped = true;
}