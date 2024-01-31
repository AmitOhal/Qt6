#include <QCoreApplication>
#include<QDebug>
#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int max=44;
    int div=0;

    do
    {
        qInfo()<<"Enter the number to be divided : ";
        cin>>div;
        int answer=max/div;
        qInfo()<<answer;
    }while(true);

    int answer=0;
    return a.exec();
}
