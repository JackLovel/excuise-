#include <QApplication>
#include <QCoreApplication>
#include <QFile>
#include <QtDebug>
#include <QTextStream>
#include <QIODevice>

int main(int argc, char *argv[])
{
        QCoreApplication a(argc, argv);

        /* 读取文本内容 */
//        QFile data(":/test.txt");
//        if (data.open(QIODevice::ReadOnly))
//        {
//            QString str;
//            QTextStream stream(&data);
//            stream.setCodec("UTF-8");
//            stream >> str;
//            qDebug() << str;
//            data.close();
//        }

        /* 写文本 */
        QFile data("test2.txt");
        if (data.open(QIODevice::WriteOnly))
        {
            QTextStream stream(&data);
            stream.setCodec("UTF-8");
            stream << QString("写入这个文本");
            data.close();
        }

        return a.exec();
}

