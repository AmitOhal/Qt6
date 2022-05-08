/*
Logical Operators
*/

#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int x=10;

    qInfo()<<"x is between 5 and 20"<<(x>5 && x<20);
    qInfo()<<"x is greater than 20, greater than 8"<<(x>20 || x>8);
    qInfo()<<"x is not equal to 10"<<(x!=10);
    qInfo()<<"Complex "<<((x>11 && x<20) || x==10);

    return a.exec();
}
