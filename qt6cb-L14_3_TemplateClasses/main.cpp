#include <QCoreApplication>
#include<QDebug>
#include "test.h"
#include "Practise.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test<int> intCalc;

    qInfo()<<intCalc.add(1,2);

    Test<double> dCalc;

    qInfo()<<dCalc.add(3.14,41.3);

    Test<QString> sCalc;

    qInfo()<<sCalc.add(QString("Hello "),QString("World"));

    Practise<double,int> diCalc;
    qInfo()<<"Practise : "<<diCalc.subt(3.14,3);

    //Practise<QString,QString> spCalc;
    //qInfo()<<"Practise : "<<spCalc.subt(QString("Hello"),QString("World"));//error invalid operands to binary expression

    return a.exec();
}
