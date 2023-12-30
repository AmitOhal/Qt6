#include <QCoreApplication>
#include<QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

void testDrive(Car* obj)
{
    obj->drive();
    obj->stop();
}

void race(RaceCar* obj)
{
    obj->drive();
    obj->stop();
    obj->goFast();
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RaceCar* player1=new RaceCar(&a);
    testDrive(player1);//Implicit conversion

    //Correct way
    Car* obj=dynamic_cast<Car*>(player1);
    if(obj)
        testDrive(obj);

    Feline* cat=new Feline(&a);
    Car* catcar=dynamic_cast<Car*>(cat);
    qInfo()<<"CatCar : "<<catcar;
    if(catcar)
        testDrive(catcar);

    return a.exec();
}
