#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H


#include <QLineEdit>

class MyLineEdit : public QLineEdit
{
    Q_OBJECT

public:
    MyLineEdit(QWidget *parent = 0);

    bool event(QEvent *e);

protected:
    void keyPressEvent(QKeyEvent *e);
};

#endif // MYLINEEDIT_H
