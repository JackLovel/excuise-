#include "click.h"
#include <QHBoxLayout>
#include <QApplication>
#include <QPushButton>

Click::Click(QWidget *parent) :
    QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->setSpacing(5);

    QPushButton *quitBtn = new QPushButton("Quit", this);
    hbox->addWidget(quitBtn, 0, Qt::AlignLeft | Qt::AlignTop);

    connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}


