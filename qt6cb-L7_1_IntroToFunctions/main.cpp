/*
Intro to Functions : C++ code flow is Top-Down approach
*/
#include <QCoreApplication>
#include<QDebug>

void test()
{
    qInfo()<<"Hello from test()";
    //test2();//Use of undeclared identifier test()2;
}

void test2()
{
    qInfo()<<"Hello from test2()";
    test();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test();//Calling function test
    qInfo()<<"argc : "<<argc;
    qInfo()<<"argv : "<<argv;
    test2();
    return a.exec();
}
