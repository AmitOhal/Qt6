/*
Class Inheritance

*/
#include <QCoreApplication>
#include "feline.h"
#include "cannine.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cannine dog;
    Feline cat;

    return a.exec();
}

