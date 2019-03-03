#include <QApplication>
#include "click.h"
#include "keypress.h"
#include "move.h"
//#include "disconnect.h"
#include "timer.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

//    Click window;
//    window.setWindowTitle("Click");
//    window.resize(300, 300);
//    window.show();

    // Example: keypress
//    KeyPress window;

//    window.resize(250, 150);
//    window.setWindowTitle("Key press");
//    window.show();

    // Exmaple: QMoveEvent
//    Move window;

//    window.resize(250, 150);
//    window.setWindowTitle("Move");
//    window.show();

    // Exmaple: Disconnecting a signal
//    Disconnect window;

//    window.resize(250, 150);
//    window.setWindowTitle("Move");
//    window.show();

    Timer window;

    window.resize(250, 150);
    window.setWindowTitle("Timer");
    window.show();

    return app.exec();
}
