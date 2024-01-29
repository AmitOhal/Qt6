#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"
#include "dog.h"

void testdrive(Car* obj)
{
    obj->drive();
    obj->stop();
}

void racecar(RaceCar* obj)
{
    obj->drive();
    obj->stop();
    obj->gofast();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    RaceCar* mycar=new RaceCar(&a);
    Car* car=qobject_cast<Car*>(mycar);//Derive class to the base class
    car->drive();

    RaceCar* fastcar=qobject_cast<RaceCar*>(car);//Base class to Derive class
    fastcar->gofast();

    Feline* cat=new Feline();
    cat->meow();

    /*'no member named qt_metacall' error occurs if a non
     QObject class is tried to convert using qobject_cast*/
    //Dog* fido=qobject_cast<Dog*>(fastcar);


    return a.exec();
}
