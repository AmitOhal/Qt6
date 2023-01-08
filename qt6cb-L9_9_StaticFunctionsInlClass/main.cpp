#include <QCoreApplication>
#include<QDebug>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Test t;
    //t.doStuff();
    //t.doOtherStaff();

    Test::doOtherStaff();
    return a.exec();
}
