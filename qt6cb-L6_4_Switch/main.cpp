/*
Flow Control : Switch
*/
#include <QCoreApplication>
#include<iostream>
#include<QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age=0;
    qInfo("Please enter your age : ");
    cin>>age;

    switch(age)
    {
        case 0 :
                qFatal("Yo did not entered a valid age");
                break;

        case 16 :
                qInfo("You can drive a vehicle");
                break;

        case 18 :
                qInfo("You can vote");
                break;//If we comment then its a fall through until next break

        case 21:
                qInfo("You can drink");
                break;
        case 67:
                qInfo("You can retire");
                break;
        default :
                qInfo("The default here...");
                break;
    }
    qInfo("Finished...");
    return a.exec();
}
