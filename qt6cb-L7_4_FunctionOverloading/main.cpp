/*
Function Overloading
*/
#include <QCoreApplication>
#include<QDebug>

void test()
{
    qInfo()<<"This is a test";
}

void test(QString name)
{
    qInfo()<<"Name : "<<name;
}

void test(int age)
{
    qInfo()<<"Age : "<<age;
}

void test(bool isActive)
{
    qInfo()<<"Testing for active";
    if(isActive)
    {
       qInfo()<<"Yes it is active";
    }
    else
    {
        qInfo()<<"No it is not active";
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test();
    test(QString("Amit"));//pass the argument with correct data type
    test(36);
    test(true);
    return a.exec();
}
