/*
Constructors and Deconstructors
*/
#include <QCoreApplication>
#include "laptop.h"

void test(Laptop &machine)
{
    machine.test();
}

void makeLaptops()
{
    //Stack
    Laptop mine(nullptr,"my Laptop");
    Laptop yours(nullptr,"your Laptop");

    mine.weight=3;
    yours.weight=5;

    test(mine);
    test(yours);
    //Will be deleted from the Stack

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    makeLaptops();
    return a.exec();
}
