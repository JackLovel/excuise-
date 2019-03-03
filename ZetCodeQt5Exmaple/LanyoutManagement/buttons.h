#ifndef BUTTONS_H
#define BUTTONS_H

#include <QWidget>
#include <QPushButton>

class Buttons : public QWidget
{
    Q_OBJECT
public:
    Buttons(QWidget *parent = 0);

private:
    QPushButton *okBtn;
    QPushButton *applyBtn;
};

#endif // BUTTONS_H
