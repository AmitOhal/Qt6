/*
Defnining Arrays
Pros : easy
Cons : No range checking . It has upper limit restrictions
*/

#include <QCoreApplication>
#include<QDebug>
#include<array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int ages[4]={23,7,34,89};
    ages[2]=1000;
    qInfo()<<ages[0];
    qInfo()<<ages[1];
    qInfo()<<ages[2];
    qInfo()<<ages[3];
    qInfo()<<"ages : "<<ages;

    //New Standard implementation of array
    array<int,5> cars;
    cars[0]=1;
    cars[1]=5;
    cars[2]=100;
    cars[3]=99;
    cars[4]=238;
    qInfo()<<cars[0];
    qInfo()<<cars[1];
    qInfo()<<cars[2];
    //cars[1]=9999;
    qInfo()<<cars[3];
    qInfo()<<cars[4];
    qInfo()<<"Size : "<<cars.size();
    qInfo()<<"SizeOf : "<<sizeof(cars);
    qInfo()<<cars[1];

    for(int i=0;i<cars.size();i++)
    {
        cars[i]+=10;
    }
    qInfo()<<"/////////////////////////////////////";
    for(int i=0;i<cars.size();i++)
    {
        qInfo()<<cars[i];
    }
    return a.exec();
}
