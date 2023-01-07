#include<QDebug>
#include "cat.h"

Cat::Cat(QObject *parent)
    : QObject{parent}
{

}

void Cat::meow()
{
    for (int var = 0; var < 3; ++var) {
        qInfo()<<"meow!";
    }
}

bool Cat::Hungray() const
{
    return m_Hungray;
}

void Cat::setHungray(bool newHungray)
{
    m_Hungray = newHungray;
}
