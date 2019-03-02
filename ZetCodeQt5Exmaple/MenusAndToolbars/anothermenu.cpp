#include "anothermenu.h"
#include <QMenu>
#include <QMenuBar>
#include <QPixmap>

AnotherMenu::AnotherMenu(QWidget *parent)
    : QMainWindow(parent)
{
    QPixmap newpix(":/img/new.png");
    QPixmap openpix(":/img/open.png");
    QPixmap quitpix(":/img/quit.png");

    QAction *newa = new QAction(newpix, "&New", this);
    QAction *open = new QAction(openpix, "&Open", this);
    QAction *quit = new QAction(quitpix, "&Quit", this);
    quit->setShortcut(tr("CTRL+Q"));

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(newa);
    file->addAction(open);
    file->addSeparator();
    file->addAction(quit);

    qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);
    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}
