#include "test.h"

Test::Test(QObject *parent): QObject{parent}
{
    qInfo()<<this<<"Test Constructed";
}

Test::~Test()
{
    qInfo()<<this<<"Test Deconstructed";
}
