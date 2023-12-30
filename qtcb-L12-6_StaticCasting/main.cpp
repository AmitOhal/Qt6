#include <QCoreApplication>
#include <QDebug>
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
    obj ->goFast();
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car* car=new Car(&a);
    qInfo()<<"Car : "<<car;

    race((RaceCar*)car);

    RaceCar* racer=static_cast<RaceCar*>(car);
    qInfo()<<racer;
    if(racer)
        race(racer);

    // error: static_cast from 'RaceCar *' to 'Feline *', which are not related by inheritance, is not allowed
    /*Feline* catCar=static_cast<Feline*>(racer);
    qInfo()<<catCar;
    if(catCar)
        testDrive(catCar);
    */

    return a.exec();

}
