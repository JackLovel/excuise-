#include "statusbar.h"
#include <QLabel>
#include <QStatusBar>
#include <QHBoxLayout>

StatusBar::StatusBar(QWidget *parent)
    : QMainWindow(parent)
{
    QFrame *frame = new QFrame(this);
    setCentralWidget(frame);

    QHBoxLayout *hbox = new QHBoxLayout(frame);

    okBtn = new QPushButton("OK", frame);
    hbox->addWidget(okBtn, 0, Qt::AlignLeft | Qt::AlignTop);

    aplBtn = new QPushButton("Apply", frame);
    hbox->addWidget(aplBtn, 1, Qt::AlignLeft | Qt::AlignTop);

    statusBar();

    connect(okBtn, &QPushButton::clicked, this, &StatusBar::OnOkPressed);
    connect(aplBtn, &QPushButton::clicked, this, &StatusBar::OnApplyPressed);
}

void StatusBar::OnOkPressed()
{
    statusBar()->showMessage("Ok button pressed", 2000);
}

void StatusBar::OnApplyPressed()
{
    statusBar()->showMessage("Apply button pressed", 2000);
}
