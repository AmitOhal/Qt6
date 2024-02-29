#include <QCoreApplication>
#include <QDebug>
#include "pet.h"

typedef QMap<QString,Pet*> petList;

petList createPets(int max)
{
    petList map;//QMap
    for (int  i= 0;  i < max; i++)
    {
        QString id=QString::number(i);
        Pet* pet=new Pet();//Notice the possible Memory Leak
        pet->setAge(i*3);
        pet->setName("Pet : "+id);
        map.insert(id,pet);
    }
    return map;//Notice the copy because QMap is not QObject
}

void listsPets(petList pets)
{
    foreach (QString key, pets.keys())
    {
        Pet* pet=pets.value(key);
        qInfo()<<key<<pet->name()<<" is Age : "<<pet->age();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    petList pets=createPets(5);
    qInfo()<<"Count : "<<pets.count();
    listsPets(pets);

    /*Pet* pet=new Pet();
    pet->setAge(38);
    pet->setName("Bad Kitty");
    pets.insert("1",pet);

    qInfo()<<"Count : "<<pets.count();
    listsPets(pets);
    */

    qDeleteAll(pets.values());
    pets.clear();

    return a.exec();
}
