#include "lines.h"
#include <QApplication>
#include "colours.h"
#include "patterns.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

//    Lines window;
//    window.resize(280, 270);
//    window.setWindowTitle("Lines");
//    window.show();

//    Colours window;
//    window.resize(360, 280);
//    window.setWindowTitle("Colours");
//    window.show();

    Patterns window;
    window.resize(350, 280);
    window.setWindowTitle("Patters");
    window.show();

    return app.exec();
}
