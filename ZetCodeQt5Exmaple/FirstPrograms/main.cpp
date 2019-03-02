#include "simple.h"
#include <QApplication>
#include <QWidget>
#include "cursors.h"
#include "mybutton.h"
#include "plusminus.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

//    QWidget window;

//    window.resize(500, 300);
//    window.move(200, 100);
//    window.setWindowTitle("Simple example");
//    window.setToolTip("QWidget");
//    window.show();

//    Cursors window;

//    window.resize(350, 150);
//    window.setWindowTitle("Cursors");

//    window.show();

//    MyButton window;

//    window.resize(350, 150);
//    window.setWindowTitle("QPushButton");

//    window.show();

    PlusMinus window;

    window.resize(300, 190);
    window.setWindowTitle("Plus minus");
    window.show();

    return app.exec();
}
