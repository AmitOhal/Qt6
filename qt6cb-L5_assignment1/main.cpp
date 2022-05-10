/*
Get the user info (name and age)
*/
#include <QCoreApplication>
#include<iostream>
#include<QDebug>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string name;
    int age;

    cout<<"Please enter your name : ";
    cin>>name;

    cout<<"Please enter your age : ";
    cin>>age;

    qInfo()<<name.c_str()<<" is "<<age << "years old";//Amit  is  36 years old

    cout<<name.c_str()<<" is "<<age << "years old";//Amit is 36years old i.e outout has difference of space

    return a.exec();
}
