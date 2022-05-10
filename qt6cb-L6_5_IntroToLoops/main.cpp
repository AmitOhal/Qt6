/*
Intro to Loops
*/
#include <QCoreApplication>
#include<iostream>
#include<QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int start=80;
    int max=100;

    //While loop
    int i=101;
    while(i<max)//first evaluate then do , not run
    {
        qInfo()<<"While = "<<i;
        i++;
    }
    qInfo("");

    //do while()     first do and then evaluate
    i=101;//runs only once
    do
    {
        qInfo()<<"do while ="<<i;
        i++;
    }while(i<max);
    return a.exec();
}
