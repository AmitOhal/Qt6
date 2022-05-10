/*
Cout : Output stream to console
namespace std is used
*/
#include <QCoreApplication>
#include<iostream>
#include<QDebug>

using namespace std;
int main(int argc, char *argv[])
{
    qInfo()<<"QCoreApplication is not constructed yet";
    QCoreApplication a(argc, argv);
    cout<<"Hello"<<endl;

    qInfo()<<"Hello";
    int age=36;
    cout<<age;
    cout<<endl; // "\r\n" in Windows , "\n" in Mac and Linux
    cout<<flush;//Flushes the outut stream from stream info

    return a.exec();
}
