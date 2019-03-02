#ifndef SIMPLE_H
#define SIMPLE_H

#include <QMainWindow>

namespace Ui {
class simple;
}

class simple : public QMainWindow
{
    Q_OBJECT

public:
    explicit simple(QWidget *parent = 0);
    ~simple();

private:
    Ui::simple *ui;
};

#endif // SIMPLE_H
