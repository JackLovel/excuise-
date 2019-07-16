#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mylineedit.h"

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool eventFilter(QObject *o, QEvent *e);

protected:
    void keyPressEvent(QKeyEvent *e);

private:
    MyLineEdit *lineEdit;
};

#endif // MAINWINDOW_H
