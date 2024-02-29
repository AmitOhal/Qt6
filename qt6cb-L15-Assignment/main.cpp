#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> ageList;

    do
    {
        int age;
        qInfo()<<"Enter age : ";
        cin>>age;
        if(!age)//Check for only integer
            break;
        ageList.append(age);
    }while(true);

    qInfo()<<"Display List of Ages entered : ";
    foreach (int age, ageList)
    {
        qInfo()<<age;
    }
    qInfo()<<"Finish";

    return a.exec();
}
