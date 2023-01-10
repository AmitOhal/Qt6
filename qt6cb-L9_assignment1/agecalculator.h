#ifndef AGECALCULATOR_H
#define AGECALCULATOR_H

#include <QObject>

class AgeCalculator : public QObject
{
    Q_OBJECT
public:
    explicit AgeCalculator(QObject *parent = nullptr);

    int ageInTenYears(int age);
    int ageInDogYears(int age);

    int getAge() const;
    void setAge(int newAge);

signals:
private :
    int age;
};

#endif // AGECALCULATOR_H
