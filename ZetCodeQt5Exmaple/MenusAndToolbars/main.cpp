#include "simplemenu.h"
#include "anothermenu.h"
#include "checkable.h"
#include "toolbar.h"
#include "skeleton.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

//    SimpleMenu window;

//    window.resize(250, 150);
//    window.setWindowTitle("Simple menu");
//    window.show();

//    AnotherMenu window;

//    window.resize(350, 200);
//    window.setWindowTitle("Another menu");
//    window.show();

//    Checkable window;

//    window.resize(250, 150);
//    window.setWindowTitle("Checkable menu");
//    window.show();

//    ToolBar window;

//    window.resize(300, 200);
//    window.setWindowTitle("QToolBar");
//    window.show();

    Skeleton window;
    window.resize(500, 500);
    window.setWindowTitle("Application skeleton");
    window.show();

    return app.exec();
}
