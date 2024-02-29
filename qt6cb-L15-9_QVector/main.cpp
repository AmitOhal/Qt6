#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data="Hello World how are you";
    QVector<QString> words=data.split(" ");

    foreach (QString word, words)
    {
        qInfo()<<word;
    }

    QVector<int> ages({44,45,38,99});
    foreach (int word, ages)
    {
        qInfo()<<word;
    }

    return a.exec();
}
