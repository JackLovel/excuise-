#ifndef MOVE_H
#define MOVE_H

#include <QWidget>
#include <QMainWindow>

class Move : public QWidget
{
    Q_OBJECT
public:
    Move(QWidget *parent = 0);

protected:
    void moveEvent(QMoveEvent *e);
};

#endif // MOVE_H
