#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QDebug>

class MyThread : public QThread
{
    Q_OBJECT

public:
    MyThread(QObject *parent = nullptr);
    void stop();

protected:
    void run();

private:
    volatile bool stopped;
};

#endif // MYTHREAD_H
