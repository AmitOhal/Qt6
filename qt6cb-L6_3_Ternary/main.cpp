/*
Flow Control : Ternary Operator

*/
#include <QCoreApplication>
#include<iostream>
#include<QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age=0;
    qInfo()<<"Please enter your age : ";
    std::cin>>age;

    age>0 && age<=100 ? qInfo("You entered a valid age"):qFatal("You entered invalid age");

    return a.exec();
}
