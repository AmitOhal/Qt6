/*
Comparisson Operators
*/
#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int x=10;
    int y=20;

    qInfo()<<"x>y"<<(x>y);
    qInfo()<<"x<y"<<(x<y);
    qInfo()<<"x>=y"<<(x>=y);
    qInfo()<<"x<=y"<<(x<=y);
    qInfo()<<"x!=y"<<(x!=y);
    qInfo()<<"x==y"<<(x==y);

    return a.exec();
}
