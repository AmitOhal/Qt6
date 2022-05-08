#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age=44;
    double height=6.02;
    bool isOn=true;
    char james='\"';

    qInfo()<<"Age : "<<age;
    qInfo()<<"Height : "<<height;

    age=44.90;
    qInfo()<<"Age : "<<age;

    signed int dogs=-1;
    qInfo()<<"Dogs : "<<dogs;
    dogs=15;
    qInfo()<<"Dogs : "<<dogs;

    unsigned int cats=-1;
    qInfo()<<"Cats : "<<cats;
    cats=15;

    qInfo()<<"Cats : "<<cats;
    qInfo()<<"isOn : "<<isOn;
    qInfo()<<"Char james : "<<james;

    qInfo()<<sizeof(dogs);
    qInfo()<<sizeof(cats);
    qInfo()<<sizeof(height);
    qInfo()<<sizeof(isOn);
    qInfo()<<sizeof(james);
    return a.exec();
}
