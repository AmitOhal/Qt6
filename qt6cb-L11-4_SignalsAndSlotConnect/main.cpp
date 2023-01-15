#include <QCoreApplication>
#include <QDebug>
#include "source.h"
#include "destination.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Source oSource;
    Destination oDestination;

    QObject::connect(&oSource,&Source::mySignal,&oDestination,&Destination::mySlot);

    oSource.test();

    oDestination.mySlot("Testing slot function call without using connect");
    return a.exec();
}
