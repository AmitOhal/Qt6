#include "destination.h"

Destination::Destination(QObject *parent):QObject{parent}
{

}

void Destination::mySlot(QString value)
{
    qInfo()<<value;
}
