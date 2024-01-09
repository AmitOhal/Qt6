#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

void testdrive(Car* obj)
{
    obj->drive();
    obj->stop();
}

void race(RaceCar* obj)
{
    obj->drive();
    obj->stop();
    obj->gofast();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Create a racecar
    RaceCar* player1=new RaceCar(&a);

    //Cast the racecar to its base class
    Car* obj=dynamic_cast<Car*>(player1);
    if(obj)
        testdrive(obj);

    //Cast it without changing it
    RaceCar* speedster=static_cast<RaceCar*>(obj);
    if(speedster)
        race(speedster);

    int* pointer=reinterpret_cast<int*>(speedster);
    qInfo()<<"Pointer : "<<pointer;
    qInfo()<<"RaceCar : "<<speedster;

    RaceCar* mycar=reinterpret_cast<RaceCar*>(pointer);
    qInfo()<<"My car's color is : "<<mycar->color;
    race(mycar);

    Feline* cat=reinterpret_cast<Feline*>(player1);
    cat->meow();
    cat->hiss();

    return a.exec();
}
