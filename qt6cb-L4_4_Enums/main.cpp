/*
Defining Enums
*/

#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    int red=0;
//    int green=1;
//    int blue=2;

//    qInfo()<<"Color : "<<green;

    enum Color{red=100,green,blue};
    //Color::green=2;//enum is a constant and value cannot be changed
    Color myColor=Color::blue;
    qInfo()<<"Color : "<<myColor;

    return a.exec();
}
