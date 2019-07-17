#include "dialog.h"


Dialog::Dialog(QWidget *parent) : QDialog(parent)
{
    startButton = new QPushButton(tr("启动线程"));
    startButton->setObjectName("startButton");

    stopButton = new QPushButton(tr("终止线程"));
    stopButton->setObjectName("stopButton");

    startButton->setEnabled(true);
    stopButton->setEnabled(false);


    connect(startButton, &QPushButton::clicked, this, &Dialog::startThread);
    connect(stopButton, &QPushButton::clicked, this, &Dialog::stopThread);

    layout = new QHBoxLayout(this);
    layout->addWidget(startButton);
    layout->addWidget(stopButton); 
}

void Dialog::startThread()
{
    // 启动线程
    thread.start();
    startButton->setEnabled(false);
    stopButton->setEnabled(true);
}

void Dialog::stopThread()
{
    // 终止线程
    // isRunning 来判断线程是否运行
    if (thread.isRunning()) {
        thread.stop();
        startButton->setEnabled(true);
        stopButton->setEnabled(false);
    }
}
