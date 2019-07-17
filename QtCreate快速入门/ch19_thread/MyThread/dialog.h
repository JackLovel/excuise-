#ifndef DIALOG_H
#define DIALOG_H

#include "mythread.h"

#include <QDialog>
#include <QHBoxLayout>
#include <QPushButton>
#include <QObject>
#include <QWidget>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);

private slots:
    void stopThread();
    void startThread();

private:
    QPushButton *startButton;
    QPushButton *stopButton;
    QHBoxLayout *layout;

    MyThread thread;
};

#endif // DIALOG_H
