#include "label.h"
#include <QApplication>
#include <QTextStream>
#include "slider.h"
#include "comboboxex.h"
#include "spinbox.h"
#include "ledit.h"
#include "statusbar.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

//    Label window;
//    window.setWindowTitle("QLabel");
//    window.show();

    // Example: slider
//    Slider window;
//    window.setWindowTitle("QSlider");
//    window.show();

    // Example: combox
//    ComboBoxEx window;
//    window.setWindowTitle("QComboBox");
//    window.show();

    // Exmaple: spinbox
//    SpinBox window;
//    window.resize(250, 150);
//    window.setWindowTitle("QSpinBox");
//    window.show();

    // Example: lineEdit
//    Ledit window;

//    window.setWindowTitle("QLineEdit");
//    window.show();

    // Example: lineEdit
    StatusBar window;

    window.resize(300, 200);
    window.setWindowTitle("QStatusBar");
    window.show();

    return app.exec();
}
