/*
Defining structs
*/

#include <QCoreApplication>
#include<QDebug>

enum Colors{black,red,green,blue,gray,white,ocean_blue,violet};

struct Laptop
{
    int weight;//4 bytes
    double value;//8 bytes
    Colors color;//4 bytes
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Laptop laptop;
    qInfo()<<"Laptop size : "<<sizeof(laptop);
    qInfo()<<"Enum size : "<<sizeof(Colors);
    laptop.color=Colors::blue;
    laptop.value=999.9;
    laptop.weight=3;


    qInfo()<<"Laptop color : "<<laptop.color;
    qInfo()<<"Laptop value : "<<laptop.value;
    qInfo()<<"Laptop weight : "<<laptop.weight;

    return a.exec();
}
