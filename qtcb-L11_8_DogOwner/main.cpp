#include <QCoreApplication>
#include "owner.h"
#include "dog.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Owner owner;
    Dog dog;

    QObject::connect(&owner,&Owner::treats,&dog,&Dog::treats);//Auto connection

    //Trying other connection somewhere else to check the signal invocation

    QObject::connect(&owner,&Owner::treats,&dog,&Dog::treats,Qt::QueuedConnection);//Same as default Auto connection

    for(int i=0;i<10;i++)
        QObject::connect(&owner,&Owner::treats,&dog,&Dog::treats,Qt::UniqueConnection);//Checks if slot is already conected and if true then emits signal only once

    owner.giveSnacks();

    return a.exec();
}
