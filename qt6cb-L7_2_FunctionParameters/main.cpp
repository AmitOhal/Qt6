/*
Function parameters
*/
#include <QCoreApplication>
#include<QDebug>
#include<iostream>

int calc(int offset,int age)
{
    int x=offset*age;
    qInfo()<<"Calc : "<<x;
    return x;
}

int catYears(int age)
{
    qInfo()<<"Performing calculations for Cat Years : ";
    return calc(9,age);
}

int dogYears(int age)
{
     qInfo()<<"Performing calculations for Dog Years : ";
    return calc(7,age);
}

int fishYears(int age)
{
    return calc(10,age);
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age=0;
    qInfo()<<"Enter your age : ";
    std::cin>>age;
    qInfo()<<"Age : "<<age;

    int value=calc(2,age);
    qInfo()<<"Double : "<<value;

    qInfo()<<"Cat Yeas : "<<catYears(age);
    qInfo()<<"Dog Yeas : "<<dogYears(age);

    return a.exec();
}
