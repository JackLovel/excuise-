#include "absolute.h"
#include "ui_absolute.h"

Absolute::Absolute(QWidget *parent) :
    QWidget(parent)
{
    QTextEdit *ledit = new QTextEdit(this);
    ledit->setGeometry(20, 5, 200, 150); //  absolute coordinates and resizes the widget.
}




