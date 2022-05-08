/*
Arithmetic Operators
*/
#include <QCoreApplication>
#include<QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age;//no assignment

    qInfo()<<"age : "<<age;

    age=21;
    qInfo()<<"age : "<<age;

    ++age;
    qInfo()<<"age : "<<age;

    age++;
    qInfo()<<"age : "<<age;

    --age;
    qInfo()<<"age : "<<age;

    age--;
    qInfo()<<"age : "<<age;;

    int older=age*5;//assignment + multiply
    qInfo()<<"Older age : "<<older;

    int younger=older/3;//assignment + divide
    qInfo()<<"Younger age : "<<younger;


    return a.exec();
}
