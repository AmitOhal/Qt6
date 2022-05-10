/*
Loops : Age Calculator Example
*/
#include <QCoreApplication>
#include<iostream>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age=0;
    qInfo()<<"Plese enter your age : ";
    std::cin>>age;

    if(age >=1 && age<=120)
    {
        //True
        int dog_years=age*7;
        qInfo()<<"Your age in dog years : "<<dog_years;
    }
    else
    {
        //False
        qWarning()<<"Warning : Not a valid age!";
    }
    return a.exec();
}
