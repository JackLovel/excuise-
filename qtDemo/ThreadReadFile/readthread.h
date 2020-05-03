#ifndef READTHREAD_H
#define READTHREAD_H

#include <QThread>
#include <QTextEdit>

class ReadThread : public QThread
{
public:
    ReadThread(QTextEdit *textEdit, QObject *parent = NULL);
    void stop(); // 结束线程

protected:
    void run() override;

private:
    bool stopped; // 线程结束的标志
    QTextEdit *textEdit;
};

#endif // READTHREAD_H
