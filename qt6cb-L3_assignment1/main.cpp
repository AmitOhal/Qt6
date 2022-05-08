/*
This is assignment to modiy the qInfo() to print name

*/
#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo()<<"Hello my name is Amit";
    return a.exec();
}
