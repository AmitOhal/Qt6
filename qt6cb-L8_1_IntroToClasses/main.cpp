/*
Intro to Classes
*/
#include <QCoreApplication>
#include "animal.h"//This file will be searched in current directory structure

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Animal cat;
    Animal dog;
    Animal fish;

    cat.setObjectName("Kitty");
    dog.setObjectName("fido");
    fish.setObjectName("FishStick");

    cat.speak("Meow");
    dog.speak("bark");
    fish.speak("blablabla");

    return a.exec();
}
