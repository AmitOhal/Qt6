#ifndef RACECAR_H
#define RACECAR_H
#include<QObject>
#include<QDebug>
#include "car.h"

class RaceCar : public Car
{
    Q_OBJECT
public:
    RaceCar(QObject* parent=nullptr);
    bool suprecharged=true;

    void gofast();
signals :

};

#endif // RACECAR_H
