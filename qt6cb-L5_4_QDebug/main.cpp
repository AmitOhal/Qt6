/*
Qt way to organize messages
*/
#include <QCoreApplication>
#include<iostream>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age=0;
    qInfo()<<"Please enter an age : ";
    std::cin>>age;
    qInfo()<<"You are "<<age<<" years of old";

    qInfo()<<"Information";
    qDebug()<<"Debug";
    qWarning()<<"Warning";
    qCritical()<<"Critical";
    qFatal("abcd");
    std::cout<<"Test Crash!";//This is not outputted to console
    qInfo()<<"Test this output";//Even this is not outputted to console because application is waiting to get crash

    return a.exec();
}
