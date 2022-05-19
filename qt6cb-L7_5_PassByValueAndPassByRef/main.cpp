/*
Pass arguments in functions by
1.By Value
2.By Reference
*/
#include <QCoreApplication>
#include<QDebug>
#include<iostream>

//Passing by value i.e copy - QObject do not like being copied!
void testVal(int x)
{
    x=x*10;
    qInfo()<<"testVal x : "<<x;//50

}//copy is destroyed


//Passing by ref i.e No Copy
void testRef(int &y)
{
    y=y*10;//Modifying Original by going to the address,
    qInfo()<<"testRef y : "<<y;//50
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int x=5;
    qInfo()<<"main x : "<<x;//5
    testVal(x);//COPY - value
    qInfo()<<"main x : "<<x;//5 x value is retained due to actual value is coped and used and not actually modified


    int y=5;
    qInfo()<<"main y : "<<y;//5
    testRef(y);//Actual Object Value i.e Memory
    qInfo()<<"main y : "<<y;//50 i.e modified value and not copied
    return a.exec();
}

