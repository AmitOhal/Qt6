#ifndef MAMMAL_H
#define MAMMAL_H

#include <QObject>
#include <QDebug>
#include "animal.h"

class Mammal : public Animal
{
    Q_OBJECT
public:
    explicit Mammal(QObject *parent = nullptr);

    bool hasBackbone(){
        return true;
    }

signals:

};

#endif // MAMMAL_H
