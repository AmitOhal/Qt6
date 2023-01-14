#include <QCoreApplication>
#include <QDebug>
#include "test.h"

void wow()
{
    std::unique_ptr<Test> t(new Test);//Automatic memory managemtn using C++ and created this in memory
    t->doStuff();

    //Pointer automatically deleted for us without using delete keyword
    if(t)
        qInfo()<<"Pointer not deleted yet";
    else
        qInfo()<<"Pointer automatically deleted";
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<"Starting";
    wow();
    qInfo()<<"Finished";
    return a.exec();
}
