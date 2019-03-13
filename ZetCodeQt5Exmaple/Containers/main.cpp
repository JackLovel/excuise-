#include <QCoreApplication>
#include <QVector>
#include <QTextStream>
#include <QStringListIterator>
#include <QSet>
#include "book.h"

bool compareByTitle(const Book &b1, const Book &b2)
{
    return b1.getTitle() < b2.getTitle();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Exmaple: QVector
//    QTextStream out(stdout);

//    QVector<int> vals = {1, 2, 3, 4, 5};

//    out << "The size of vector is: " << vals.size() << endl;
//    out << "The first item is: " << vals.first() << endl;
//    out << "The last item is: " << vals.last() << endl;
//    vals.append(6);
//    vals.prepend(0);

//    out << "Elements: ";

//    for (int val: vals)
//    {
//        out << val << " ";
//    }

//    out << endl;


    // Exmaple: QList
//    QTextStream out(stdout);

//    QList<QString> authors = {"Balzac", "Tolstoy",
//                             "Gulbranssen", "London"};

//    for (int i=0; i < authors.size(); ++i)
//    {
//        out << authors.at(i) << endl;
//    }

//    authors << "Galsworthy" << "Sienkiewicz";

//    out << "************************" << endl;

//    //std::sort(authors.begin(), authors.end());
//    out << "Sorted:" << endl;

//    for (QString author : authors)
//    {
//        out << author << endl;
//    }

    // Example: QStringList
//    QTextStream out(stdout);

//    QString string = "coin, book, cup, pencil, clock, bookmark";
//    QStringList items = string.split(",");
//    QStringListIterator it(items);

//    while (it.hasNext())
//    {
//        out << it.next().trimmed() << endl;
//    }

    // Exmaple: QSet
//    QTextStream out(stdout);

//    QSet<QString> cols1 = {"yello", "red", "blue"};
//    QSet<QString> cols2 = {"blue", "pink", "orange"};

//    out << "The are " << cols1.size() << " values in set" << endl;

//    cols1.insert("brown");
//    out << "There are " << cols1.size() << " values int the set" << endl;

//    cols1.unite(cols2);
//    out << "There are " << cols1.size() << " values in the set" << endl;

//    for (QString val: cols1)
//    {
//        out << val << endl;
//    }

//    QList<QString> lcols = cols1.values();
//    std::sort(lcols.begin(), lcols.end());

//    out << "************************" << endl;
//    out << "Sorted:" << endl;

//    for (QString val : lcols)
//    {
//        out << val << endl;
//    }

    // Exmaple: QMap
//    QTextStream out(stdout);

//    QMap<QString, int> items = {{"coins", 5}, {"books", 3}};

//    items.insert("bottles", 7);

//    QList<int> values = items.values();

//    out << "Values:" << endl;

//    for (int val: values)
//    {
//        out << val << endl;
//    }

//    QList<QString> keys = items.keys();

//    out << "Keys:" << endl;
//    for (QString key : keys)
//    {
//        out << key << endl;
//    }

//    QMapIterator<QString, int> it(items);

//    out << "Pairs:" << endl;

//    while (it.hasNext())
//    {
//        it.next();
//        out << it.key() << ": " << it.value() << endl;

//    }

    // Example: custom class sorting
    QTextStream out(stdout);




    QList<Book> books = {
        Book("Jack London", "The Call of the Wild"),
        Book("Honore de Balzac", "Father Goriot"),
        Book("Leo Tolstoy", "Sentimental ecucation"),
        Book("Guy de Maupassant", "Une vie"),
        Book("William Snakespeare", "Hamlet")
    };

    std::sort(books.begin(), books.end(), compareByTitle);

    for (Book book : books)
    {
        out << book.getAuthor() << ": " << book.getTitle() << endl;
    }
    return a.exec();
}














