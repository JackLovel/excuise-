#include "toolbar.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>
#include <QPixmap>

ToolBar::ToolBar(QWidget *parent)
    : QMainWindow(parent)
{
    QPixmap newpix(":/img/new.png");
    QPixmap openpix(":/img/open.png");
    QPixmap quitpix(":/img/quit.png");

    QToolBar *toolbar = addToolBar("main toolbar");  // create toolbar
    toolbar->addAction(QIcon(newpix), "new File");
    toolbar->addAction(QIcon(openpix), "Open File");
    toolbar->addSeparator();
    QAction *quit = toolbar->addAction(QIcon(quitpix),
                                       "Quit Application");

    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}


