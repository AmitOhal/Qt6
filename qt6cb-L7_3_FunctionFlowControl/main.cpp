/*
Function Flow Control
*/
#include <QCoreApplication>
#include<QDebug>
#include<iostream>


using namespace std;

int calc(int offset,int age)
{
    if(offset==0) qFatal("Offset cannot be zero!");

    if(age<=0 || age>120)
    {
        qFatal("Invalid age!");
    }
    return offset*age;
}

int catYears(int age)
{
    return calc(9,age);
}

int dogYears(int age)
{
    return calc(7,age);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age=0;
    qInfo()<<"Enter your age : ";
    cin>>age;

    qInfo()<<"Dog Years : "<<dogYears(age);
    qInfo()<<"Cat Years : "<<catYears(age);
    return a.exec();
}
