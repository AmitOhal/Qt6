/*
C++ way of outputting error
*/
#include <QCoreApplication>
#include<iostream>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout<<"Standard out"<<endl;//Colored in black

    cerr<<"Standard error"<<endl;//Colored in Red in Application outout without Terminal

    return a.exec();
}
