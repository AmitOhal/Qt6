#include "cannine.h"

Cannine::Cannine(QObject *parent): Mammal{parent}
{
    qInfo()<<this<<"Constructed";
}
