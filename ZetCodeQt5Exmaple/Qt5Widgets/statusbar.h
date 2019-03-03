#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QMainWindow>
#include <QPushButton>

class StatusBar : public QMainWindow
{
    Q_OBJECT
public:
    StatusBar(QWidget *parent = 0);

public slots:
    void OnOkPressed();
    void OnApplyPressed();

private:
    QPushButton *okBtn;
    QPushButton *aplBtn;
};

#endif // STATUSBAR_H
