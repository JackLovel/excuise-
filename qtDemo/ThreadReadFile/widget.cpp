#include "widget.h"
#include "ui_widget.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 创建线程对象
    readingThread = new ReadThread(ui->textEdit, this);

    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::on_pushButton_clicked);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    if (!readingThread->isRunning()) {
        readingThread->start();
    } else {
        qDebug() << "线程正在运行";
    }
}

// 点击 “结束读取” 按钮结束线程
void Widget::on_pushButton_2_clicked()
{
    readingThread->stop();
    readingThread->wait();
}
