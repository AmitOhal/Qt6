#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test *parent=new Test(&a);//Creating parent
    parent->dog=new Animal(parent);
    delete parent;//Deleting parent

    return a.exec();//a deconstructed

}
