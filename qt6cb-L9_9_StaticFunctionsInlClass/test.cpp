#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo()<<this<<"Constructed";

}

void Test::doStuff()
{
    qInfo()<<this<<"doStuff";
}

void Test::doOtherStaff()
{
    //"this" does not exist
    //qInfo()<<this<<"doOtherStaff";
    //qInfo()<<"doOtherStaff";

    //doStuff();//No instance can not call the other function

    //We can still run without an instance
    qInfo()<<"doOtherStaff";

}
