#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include<QDebug>

class Animal : public QObject
{
    Q_OBJECT
public:
    explicit Animal(QObject *parent=nullptr);//The body is defined somewhere else in the project but its not defined here
    void speak(QString message);
signals:

};

#endif // ANIMAL_H
