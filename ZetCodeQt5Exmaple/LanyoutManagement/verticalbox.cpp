#include "verticalbox.h"
#include <QVBoxLayout>
#include <QPushButton>

VerticalBox::VerticalBox(QWidget *parent) :                     QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->setSpacing(1);

    QPushButton *settings = new QPushButton("Setting", this);
    settings->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QPushButton *accounts = new QPushButton("Accounts", this);
    accounts->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QPushButton *loans = new QPushButton("Loans", this);
    loans->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QPushButton *cash = new QPushButton("Cash", this);
    cash->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QPushButton *debts = new QPushButton("debts", this);
    debts->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    vbox->addWidget(settings);
    vbox->addWidget(accounts);
    vbox->addWidget(loans);
    vbox->addWidget(cash);
    vbox->addWidget(debts);

    setLayout(vbox);
}
