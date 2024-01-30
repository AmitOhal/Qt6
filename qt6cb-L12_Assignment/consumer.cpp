#include "consumer.h"

Consumer::Consumer(QObject *parent)
    : QObject{parent}
{

}

void Consumer::testing()
{
    Producer* p=qobject_cast<Producer*>(sender());
    //Consumer* p=qobject_cast<Producer*>(sender());
    if(!p)
    {
        qInfo()<<"Sender : "<<p<<p->objectName();
        return;
    }
    else
        qInfo()<<"Sender : "<<p<<p->objectName();
}
