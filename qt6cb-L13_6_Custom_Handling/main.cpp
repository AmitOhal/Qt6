#include <QCoreApplication>
#include <QDebug>
#include<iostream>

using namespace std;

struct MyIssue : exception
{
    const char * description;
    const char * what() const throw()
    {
        return "My Issue";
    }
};

bool doDivision(int max)
{
    int value;
    qInfo()<<"Enter number : ";
    cin>>value;
    try
    {
        if(value==0)
            throw std::invalid_argument("Canot divide by zero");
        if(value>5)
            throw std::out_of_range("Should be less than 5");

        int result=max/value;
        qInfo()<<"Result : "<<result;

        if(value==1)
        {
            MyIssue e;
            e.description="User did not read the manual";
            throw e;
        }
        return true;
    }
    catch(MyIssue &e)
    {
        qWarning()<<"My custom exception : "<<e.what()<<" "<<e.description;
        return false;
    }

    catch (std::exception const& e)
    {
        qWarning()<<"Exception caought : "<<e.what();
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
