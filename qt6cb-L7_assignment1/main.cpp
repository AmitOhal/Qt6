/*
Get the size of walls and calclulate the totla paint required and stop if 0 is entered by user
*/
#include <QCoreApplication>
#include<QDebug>
#include<iostream>

int get_size()
{
    qInfo()<<"Enter the ceiling height in feet : ";
    qInfo()<<"Enter in feet : ";
    int cielingHeight;
    std::cin>>cielingHeight;
    return cielingHeight;
}

double calculatePaint(int width,int height)
{
    double sqft=width*height;
    double paint=sqft/325;
    return paint;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo()<<"Enter the ceiling height in feet : ";
    int size=get_size();
    if(size<=0)qFatal("Please read teh manual");
    double calculatePrice=0;
    do
    {
        qInfo()<<"Add a wall by entering a number or 0 to stop";

        int value=get_size();
        if(value<=0)
            break;
        else
        {
            //Call to calculate paint
            double price=calculatePaint(value,size);
            calculatePrice+=price;
        }
    }while(true);
    qInfo()<<"Total price : "<<calculatePrice;
    return a.exec();
}
