/*
Flow control : If and Else
*/
#include <QCoreApplication>
#include<iostream>
#include<QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age=0;
    qInfo()<<"Please enter your age : ";
    cin>>age;
    if(age>17)
    {
        //True
        qInfo("You are over 17 yeards old");
    }
    else if(age<12){
        qInfo()<<"You are not even 18 yet years old";
    }
    else
    {
        //False
        qInfo()<<"You are not over 17 years old";
    }

    return a.exec();
}
