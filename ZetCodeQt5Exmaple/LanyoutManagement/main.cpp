#include "absolute.h"
#include <QApplication>
#include "verticalbox.h"
#include "buttons.h"
#include "layouts.h"
#include "formex.h"
#include "calculator.h"
#include "review.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    Absolute window;
//    window.setWindowTitle("Absolute");
//    window.show();

//    VerticalBox window;
//    window.resize(240, 230);
//    window.setWindowTitle("VerticalBox");
//    window.show();

//    Buttons window;

//    window.resize(290, 170);
//    window.setWindowTitle("Button");
//    window.show();

//    Layouts window;

//    window.setWindowTitle("Layouts");
//    window.show();

//    FormEx window;

//    window.setWindowTitle("Form example");
//    window.show();

//    Calculator window;

//    window.move(300, 300);
//    window.setWindowTitle("Calulator");
//    window.show();

    Review window;

    window.setWindowTitle("Review");
    window.show();

    return app.exec();
}
