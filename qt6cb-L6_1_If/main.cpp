/*
Flow control using condition
*/
#include <QCoreApplication>
#include<iostream>
#include<QDebug>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age;

    qInfo()<<"Please enter an age : ";
    cin>>age;

    if(age==0) qFatal("NOT a valid age!");

    qInfo()<<"You entered : "<<age;

    if(age<18)
    {
        qInfo()<<"You are not an adult yet";
        qInfo()<<"Come back when you are older!!!";
    }
    //This section of code will execute regardless of scope of If condition
    if(age<21 && age>=18) qInfo()<<"You are not really an adult yet!";

    if(age>=21) qInfo()<<"You are an adult!";

    if(age>120) qCritical()<<"How can you be that old!";

    qInfo()<<"Done";
    return a.exec();
}
