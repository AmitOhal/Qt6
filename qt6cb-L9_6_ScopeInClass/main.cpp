#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name="Bryan";
    qInfo()<<"My name is at : "<<&name<<" = "<<name;

    Animal cat(&a,"Fluffy");
    Animal dog(&a,"Fido");
    Animal person(&a,name);

    person.sayHello("Hola");
    cat.name="My cat";
    dog.name="My dog";

    qInfo()<<cat.name;
    qInfo()<<dog.name;
    qInfo()<<person.name;

    return a.exec();
}
