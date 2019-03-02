#include "checkable.h"
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QLabel>

Checkable::Checkable(QWidget *parent)
    : QMainWindow(parent)
{
    viewst = new QAction("&View statusBar", this);
    viewst->setCheckable(true);
    viewst->setChecked(true);

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(viewst);

    QLabel *statusLabel = new QLabel("this is status");
    statusBar()->addWidget(statusLabel);

    connect(viewst, &QAction::triggered, this, &Checkable::toggleStatusbar);
}


void Checkable::toggleStatusbar()
{
    if (viewst->isChecked())
    {
        statusBar()->show();
    } else {
        statusBar()->hide();
    }
}
