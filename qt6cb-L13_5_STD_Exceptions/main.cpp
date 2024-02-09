#include <QCoreApplication>
#include<QDebug>
#include<iostream>

using namespace std;

bool doDivision(int max)
{
    try
    {
        int value;
        qInfo()<<"Enter number : ";
        cin>>value;

        if(value==0)
            throw std::invalid_argument("Cannot divide by zero");

        if(value>5)
            throw std::out_of_range("Should be less than 5");

        int result=max/value;
        qInfo()<<"Result : "<<result;

        return  true;

    }
    catch (std::exception const& e)
    {
        qWarning()<<"Exception caught : "<<e.what();
        return false;
    }
    return true;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max=44;

    do
    {
        //Loop
    }while(doDivision(max));
    return a.exec();
}
