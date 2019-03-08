#ifndef PATTERNS_H
#define PATTERNS_H

#include <QWidget>

class Patterns : public QWidget
{
public:
    Patterns(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPrinting();
};

#endif // PATTERNS_H
