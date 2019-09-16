#ifndef CONNECTDLG_H
#define CONNECTDLG_H

#include <QWidget>
#include <QDialog>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QComboBox>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QPushButton>
#include <QGroupBox>
#include <QMessageBox>
#include <QSqlError>

class ConnectDlg : public QDialog
{
    Q_OBJECT

public:
    ConnectDlg(QWidget *parent = nullptr);
    ~ConnectDlg();

    QString driverName() const;
    QString databaseName() const;
    QString userName() const;
    QString password() const;
    QString hostName() const;
    int port() const;

    QSqlError addConnection(const QString &driver, const QString &dbName,
                            const QString &host, const QString &user,
                            const QString &passwd, int port = -1);
    void createDB();
    void addSqliteconnection();

private slots:
    void okBtnSlot();
    void cancel() { reject(); }
    void  driverChanged(const QString &);

private:
    QLabel *statusLabel;
    QLabel *driverLabel;
    QLabel *databaseLabel;
    QLabel *userLabel;
    QLabel *passwordLabel;
    QLabel *hostnameLabel;
    QLabel *portLabel;
    QComboBox *comboDriver;
    QLineEdit *editDatabase;
    QLineEdit *editUsername;
    QLineEdit *editPassword;
    QLineEdit *editHostname;
    QSpinBox *portSpinBox;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QGroupBox *connGroupBox;
};

#endif // CONNECTDLG_H
