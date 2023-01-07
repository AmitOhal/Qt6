#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo()<<"M1 Mac Os endln";
    return a.exec();
}
