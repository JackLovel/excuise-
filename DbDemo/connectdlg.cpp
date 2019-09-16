#include "connectdlg.h"

#include <QSqlDatabase>
#include <QtSql>

ConnectDlg::ConnectDlg(QWidget *parent) : QDialog(parent)
{
    statusLabel = new QLabel(tr("状态: "));
    driverLabel = new QLabel(tr("驱动："));
    databaseLabel = new QLabel(tr("数据库名："));
    userLabel = new QLabel(tr("用户名: "));
    passwordLabel = new QLabel(tr("用户名: "));
    hostnameLabel = new QLabel(tr("主机名："));
    portLabel = new QLabel(tr("端口："));
    comboDriver = new QComboBox;
    editDatabase = new QLineEdit;
    editUsername = new QLineEdit;
    editPassword = new QLineEdit;
    editHostname = new QLineEdit;
    portSpinBox = new QSpinBox;
    okBtn = new QPushButton(tr("连接数据库"));
    cancelBtn = new QPushButton(tr("退出"));
    connGroupBox = new QGroupBox(tr("数据库连接设置"));

    QStringList drivers = QSqlDatabase::drivers();
    comboDriver->addItems(drivers);

    connect(comboDriver, SIGNAL(currentIndexChanged(QString)), this, SLOT(driverChanged(QString)));

    statusLabel->setText(tr("准备连接数据库！"));

    QVBoxLayout *mainLayout = new QVBoxLayout;
    QHBoxLayout *btnLayout = new QHBoxLayout;
    QGridLayout *layout1 = new  QGridLayout;

    layout1->addWidget(driverLabel, 0, 0);
    layout1->addWidget(comboDriver, 0, 1);
    layout1->addWidget(databaseLabel, 1, 0);
    layout1->addWidget(editDatabase, 1, 1);
    layout1->addWidget(userLabel, 2, 0);
    layout1->addWidget(editUsername, 2, 1);
    layout1->addWidget(passwordLabel, 3, 0);
    layout1->addWidget(editPassword, 3, 1);
    layout1->addWidget(hostnameLabel, 4, 0);
    layout1->addWidget(editHostname, 4, 1);
    layout1->addWidget(portLabel, 5, 0);
    layout1->addWidget(portSpinBox, 5, 1);

    mainLayout->addLayout(layout1);
    mainLayout->addWidget(statusLabel);

    btnLayout->addStretch(1);
    btnLayout->addWidget(okBtn);
    btnLayout->addWidget(cancelBtn);
    mainLayout->addLayout(btnLayout);
    connGroupBox->setLayout(mainLayout);

    QVBoxLayout *mainLayout2 = new QVBoxLayout;
    mainLayout2->addWidget(connGroupBox);
    setLayout(mainLayout2);
}

ConnectDlg::~ConnectDlg()
{

}

void ConnectDlg::driverChanged(const QString &text)
{
    if (text == "QSQLITE") {
        editDatabase->setEnabled(false);
        editUsername->setEnabled(false);
        editPassword->setEnabled(false);
        editHostname->setEnabled(false);
        portSpinBox->setEnabled(false);
    } else {
        editDatabase->setEnabled(true);
        editUsername->setEnabled(true);
        editPassword->setEnabled(true);
        editHostname->setEnabled(true);
        portSpinBox->setEnabled(true);
    }
}

QString ConnectDlg::driverName() const
{
    return comboDriver->currentText();
}

QString ConnectDlg::databaseName() const
{
    return editDatabase->text();
}

QString ConnectDlg::userName() const
{
    return editUsername->text();
}

QString ConnectDlg::password() const
{
    return editPassword->text();
}

QString ConnectDlg::hostName() const
{
    return editHostname->text();
}

int ConnectDlg::port() const
{
    return portSpinBox->value();
}

void ConnectDlg::okBtnSlot()
{
    if (comboDriver->currentText().isEmpty()) {
        statusLabel->setText(tr("请选择一个数据库驱动！"));
        comboDriver->setFocus();
    } else if (comboDriver->currentText() == "QSQLITE") {
        addSqliteconnection();
        // 创建数据库表，如已存在则无须执行
        createDB();
        accept();
    } else {
        QSqlError err = addConnection(driverName(), databaseName(), hostName(), userName(),
                                      password(), port());
        if (err.type() != QSqlError::NoError) {
            statusLabel->setText(err.text());
        } else {
            statusLabel->setText(tr("连接数据库成功！"));
        }
        // 创建数据库，如已存在则无须执行
        accept();
    }
}


QSqlError ConnectDlg::addConnection(const QString &driver, const QString &dbName, const QString &host, const QString &user, const QString &passwd, int port)
{
    QSqlError err;
    QSqlDatabase db = QSqlDatabase::addDatabase(driver);
    db.setDatabaseName(dbName);
    db.setHostName(host);
    db.setPort(port);
    if (!db.open(user, passwd)) { // 如果数据库打开失败
        err = db.lastError();
    }

    return err;
}

void ConnectDlg::addSqliteconnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("databasefile");
    if (!db.open()) {
        statusLabel->setText(db.lastError().text());
        return;
    }
    statusLabel->setText(tr("创建sqlite数据库成功"));
}

void ConnectDlg::createDB()
{
    // 创建两张数据库，并插入适当信息
    QSqlQuery query;
    query.exec("create table factory (int id primary key, manufactory varchar(40), address varchar(40))");
    query.exec(QObject::tr("insert into factory values(1, '一汽大众', '长春')"));
    query.exec(QObject::tr("insert into factory values(2, '二汽神龙', '武汉')"));
    query.exec(QObject::tr("insert into factory values(3, '上海大众', '上海')"));

    query.exec("create table cars (carid int primary key, name varchar(50), factoryid int, year int, foregin key(factoryid) references factory");
    query.exec(QObject::tr("insert into cars values(2, '捷达', 1, 1993)"));
    query.exec(QObject::tr("insert into cars values(3, '宝来', 1, 2000)"));
    query.exec(QObject::tr("insert into cars values(4, '毕加索', 2, 1999)"));

    query.exec(QObject::tr("insert into cars values(5, '富康', 2, 2004)"));
    query.exec(QObject::tr("insert into cars values(6, '标致307', 2, 2001)"));
    query.exec(QObject::tr("insert into cars values(7, '桑塔纳', 3, 1995)"));
    query.exec(QObject::tr("insert into cars values(8, '帕萨特', 3, 2000)"));
}












