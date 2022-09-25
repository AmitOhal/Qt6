#include<QDebug>
#include "lion.h"

Lion::Lion(QObject *parent):Feline(parent)
{
    qInfo()<<this<<" Lion Constructred";
}

void Lion::speak()
{
    qInfo()<<this<<" ROAR!!";

    //Calling the function from a base class
    Feline::speak();
}
