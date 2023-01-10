#include "agecalculator.h"

AgeCalculator::AgeCalculator(QObject *parent)
    : QObject{parent}
{

}

int AgeCalculator::ageInTenYears(int age)
{
    return age+10;
}

int AgeCalculator::ageInDogYears(int age)
{
    return age*7;
}

int AgeCalculator::getAge() const
{
    return age;
}

void AgeCalculator::setAge(int newAge)
{
    age = newAge;
}
