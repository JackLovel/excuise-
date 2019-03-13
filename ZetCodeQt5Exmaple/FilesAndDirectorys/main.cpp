#include <QCoreApplication>
#include <QTextStream>
#include <QFileInfo>
#include <QDateTime>
#include <QDir>

// /home/w/Desktop
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Example: file size
//    QTextStream out(stdout);

//    if (argc != 2)
//    {
//        qWarning("Usage: file_size file");
//        return 1;
//    }

    //QString filename = argv[1];
//    QString filename = "/home/w/Desktop/main.cpp";

//    if (!QFile(filename).exists())
//    {
//        qWarning("The file does not exist");
//        return 1;
//    }

//    QFileInfo fileinfo(filename);

//    qint64 size = fileinfo.size();

//    QString str = "The size is: %1 bytes";
//    out << str.arg(size) << endl;

    // Exmaple: reading file contents
//    QTextStream out(stdout);
//    QString fileName =  "/home/w/Desktop/main.cpp";

//    QFile file(fileName);

//    if (!file.open(QIODevice::ReadOnly))
//    {
//        qWarning("Cannot open file for reading");
//        return 1;
//    }

//    QTextStream in(&file);
//    while(!in.atEnd())
//    {
//        QString line = in.readLine();
//        out << line << endl;
//    }

//    file.close();

    // Example: Writing to a file
//    QTextStream out(stdout);

//    QString filename = "/home/w/Desktop/distros.txt";
//    QFile file(filename);

//    if (file.open(QIODevice::WriteOnly))
//    {
//        QTextStream out(&file);
//        out << "Xubuntu" << endl;
//        out << "Arch" << endl;
//        out << "Debian" << endl;
//        out << "Redhat" << endl;
//        out << "Slackware" << endl;
//    }
//    else
//    {
//        qWarning("Could not open file");
//    }

//    file.close();

    // Exmaple: copy file
//    QTextStream out(stdout);

////    if (argc != 3)
////    {
////        qWarning("Usage: copyfile source desination");
////        return 1;
////    }

//    //QString source = argv[1];
//    QString source = "/home/w/Desktop/distros.txt";

//    if (!QFile(source).exists())
//    {
//        qWarning("The source file does not exist");
//        return 1;
//    }

//    //QString destin(argv[2]);
//    QString destin("/home/w/Desktop/destin.txt");
//    QFile::copy(source, destin);

//    QFileInfo fileinfo(destin);

//    QString group = fileinfo.group();
//    QString owner = fileinfo.owner();

//    out << "Goup: " << group << endl;
//    out << "Owner: " << owner << endl;

//    QDateTime last_red = fileinfo.lastRead();
//    QDateTime last_mod = fileinfo.lastModified();

//    out << "Last read: " << last_red.toString() << endl;
//    out << "Last modified: " << last_mod.toString() << endl;

    // Example: directorys

//    QTextStream out(stdout);
//    QDir dir;

//    if (dir.mkdir("mydir"))
//    {
//        out << "mydir successfully created" << endl;
//    }

//    dir.mkdir("mydir2");

//    if (dir.exists("mydir2"))
//    {
//        dir.rename("mydir2", "newdir");
//    }

//    dir.mkpath("temp/newdir");

//    out << "Current path:" << QDir::currentPath() << endl;
//    out << "Home path: " << QDir::homePath() << endl;
//    out << "Temporary path:" << QDir::tempPath() << endl;
//    out << "Rooth path:" << QDir::rootPath() << endl;

    // Example: File path
    QTextStream out(stdout);

    QString filename = "/home/w/Desktop/distros.txt";
    QFileInfo fileinfo(filename);

    QString absPath = fileinfo.absoluteFilePath();
    QString baseName = fileinfo.baseName();
    QString compBaseName = fileinfo.completeBaseName();
    QString fileName = fileinfo.fileName();
    QString suffix = fileinfo.suffix();
    QString compSuffix = fileinfo.completeSuffix();

    out << "Absolute file path:" << absPath << endl;
    out << "Base name: " << baseName << endl;
    out << "Complete base name: " << compBaseName << endl;
    out << "File name: " << fileName << endl;
    out << "Suffix: " << suffix << endl;
    out << "Whole suffix: " << compSuffix << endl;

    QString directory = "/home/w/Desktop/jitu/";

    QDir dir(directory);

    if (!dir.exists())
    {
        qWarning("The directory does not exist");
        return 1;
    }

    dir.setFilter(QDir::Files | QDir::AllDirs);
    dir.setSorting(QDir::Size | QDir::Reversed);

    QFileInfoList list = dir.entryInfoList();

    int max_size = 0;

    foreach (QFileInfo finfo, list) {
        QString name = finfo.fileName();
        int size = name.size();

        if (size > max_size)
        {
            max_size = size;
        }
    }

    int len = max_size + 2;

    out << QString("Filename").leftJustified(len).append("Bytes") << endl;

    for (int i = 0; i < list.size(); ++i)
    {
        QFileInfo fileInfo = list.at(i);

        QString str = fileInfo.fileName().leftJustified(len);
        str.append(QString("%1").arg(fileInfo.size()));
        out << str << endl;
    }

    return a.exec();
}













