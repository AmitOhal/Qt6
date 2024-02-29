#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data="Hello World how are you";

    QList<QString> words=data.split(" ");

    qInfo()<<words;

    foreach (QString word, words)
    {
        qInfo()<<word;
    }

    QList<int> age({44,20,90,38,100});
    age.append(99);
    qInfo()<<age;
    age.remove(3);
    qInfo()<<age;
    foreach(int word,age)
    {
        qInfo()<<word;
    }
    return a.exec();
}
