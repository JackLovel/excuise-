#include "simple.h"
#include "ui_simple.h"

simple::simple(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::simple)
{
    ui->setupUi(this);
}

simple::~simple()
{
    delete ui;
}
