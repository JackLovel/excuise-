#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.resize(400, 400);
    w.move(300, 300);
    w.show();

    return a.exec();
}
