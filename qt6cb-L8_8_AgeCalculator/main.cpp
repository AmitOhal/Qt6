#include <QCoreApplication>
#include<QDebug>
#include "agecalc.h"


void print(AgeCalc &calc)
{
    qInfo()<< "Name : "<<calc.name()<< " Human Years : " << calc.humanYears();
    qInfo()<< "Name : "<<calc.name()<< " Dog Years : " << calc.dogYears();
    qInfo()<< "Name : "<<calc.name()<< " Cat Years : " << calc.catYears();
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCalc bryan;
    AgeCalc tammy;

    bryan.setName("Bryan");
    bryan.setAge(46);
    tammy.setName("Tammy");
    tammy.setAge(26);

    print(bryan);
    print(tammy);

    return a.exec();
}
