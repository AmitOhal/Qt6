#include "calc.h"
#include <QCoreApplication>
#include <QDebug>
#include <iostream>
Calc* getObject()
{
    Calc *o=new Calc();
    return o;
}

int dogYears(int age,Calc *calc)
{
    return calc->dogYears(age);
}

int catYears(int age,Calc *calc)
{
    return calc->catYears(age);
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Calc *calc=getObject();
    qInfo()<<"Enter the age : ";
    int age;
    std::cin>>age;

    qInfo()<<"Dog Years : "<<dogYears(age,calc);


    qInfo()<<"Cat Years : "<<catYears(age,calc);;

    delete calc;

    return a.exec();
}
