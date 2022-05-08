/*
Assignment Operators
*/
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int value=15;
    qInfo()<<"value : "<<value;//15

    value+=10;
    qInfo()<<"value : "<<value;//25

    value-=30;
    qInfo()<<"value : "<<value;//-5

    value*=10;
    qInfo()<<"value : "<<value;//-50

    value/=20;
    qInfo()<<"value : "<<value;//-2


    return a.exec();
}
