#include <QCoreApplication>
#include <QDebug>
#include "agecalculator.h"
#include<iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    AgeCalculator human;
    AgeCalculator dog;

    qInfo()<<"Enter the age : ";
    std::cin>>age;//37

    human.setAge(age);

    //Calculate human years
    age=human.ageInTenYears(human.getAge());//47

    qInfo()<<"Human age in Ten Years : "<<age;

    dog.setAge(age);//set the age for dog
    //Calculate the dog years
    age=dog.ageInDogYears(dog.getAge());

    qInfo()<<"Dog Years : "<<age;

    return a.exec();
}
