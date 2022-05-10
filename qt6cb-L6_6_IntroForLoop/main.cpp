/*
For loop : start,end,step and also it is used when we have range
*/
#include <QCoreApplication>
#include<iostream>
#include<QDebug>
#include<array>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max=0;
    qInfo()<<"Please enter a max number : ";
    std::cin>>max;
    if(max<=0)
        qFatal("Please enter a valid max number");
    for(int i=0;i<max;i++)
    {
        qInfo()<<"i = "<<i;
    }

    std::array<int,5> ages={36,44,56,18,100};//Zero based index
    for(int i=0;i<ages.size();i++)
    {
       qInfo()<<"ages[" << i << "]="<<ages.at(i);
    }
    return a.exec();
}
