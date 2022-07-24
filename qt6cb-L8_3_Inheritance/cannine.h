#ifndef CANNINE_H
#define CANNINE_H

#include <QObject>
#include <QDebug>
#include "mammal.h"

class Cannine : public Mammal
{
    Q_OBJECT
public:
    explicit Cannine(QObject *parent = nullptr);
    void bark(){
        qInfo()<<"bark!";
    }
signals:

};

#endif // CANNINE_H
