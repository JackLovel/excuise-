#include "layouts.h"
#include <QVBoxLayout>
#include <QListWidget>
#include <QPushButton>

Layouts::Layouts(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout();
    QHBoxLayout *hbox = new QHBoxLayout(this);

    QListWidget *lw = new QListWidget(this);
    lw->addItem("The Omen");
    lw->addItem("The Exorcist");
    lw->addItem("Notes on scandal");
    lw->addItem("Fargo");
    lw->addItem("Capote");

    QPushButton *add = new QPushButton(tr("添加"), this);
    QPushButton *rename = new QPushButton(tr("重命名"), this);
    QPushButton *remove = new QPushButton(tr("删除"), this);
    QPushButton *removeall = new QPushButton("删除全部", this);

    vbox->setSpacing(3);
    vbox->addStretch(1);
    vbox->addWidget(add);
    vbox->addWidget(rename);
    vbox->addWidget(remove);
    vbox->addWidget(removeall);
    vbox->addStretch(1); // two addStretch that vertical center

    hbox->addWidget(lw);
    hbox->addSpacing(15);
    hbox->addLayout(vbox);

    setLayout(hbox);
}
