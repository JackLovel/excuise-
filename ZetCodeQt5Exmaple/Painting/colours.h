#ifndef COLOURS_H
#define COLOURS_H

#include <QWidget>

class Colours : public QWidget
{
public:
    Colours(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);

private:
    void doPainting();
};

#endif // COLOURS_H
