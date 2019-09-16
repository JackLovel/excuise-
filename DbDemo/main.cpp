#include "mainwindow.h"
#include <QApplication>
#include <QDialog>
#include "connectdlg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConnectDlg dialog;
    if (dialog.exec() != QDialog::Accepted) {
        return -1;
    }
//    dialog.show();
    dialog.show();

    return a.exec();
}
