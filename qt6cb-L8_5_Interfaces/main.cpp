#include <QCoreApplication>
#include<QDebug>
#include "appliance.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Appliance machine;

    qInfo()<< "Microwave Constructor : "<<machine.cook();
    qInfo()<< "Toaster Constructor : "<<machine.grill();
    qInfo()<< "Freezer Constructor : "<<machine.freeze();


    return a.exec();
}
