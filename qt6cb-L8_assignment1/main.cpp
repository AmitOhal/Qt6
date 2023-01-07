#include <QCoreApplication>
#include "cat.h"

void do_fail(Cat c)
{
    c.meow();
}
void do_ptr(Cat *cat)
{
    bool hungray=cat->Hungray();
    if(hungray)
        cat->meow();
    else
        qInfo()<<"Tom is not Hungray!";
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat tom;

    tom.setHungray(true);

    do_ptr(&tom);

    //do_fail(tom);//CAll to implicitly-deleted copy constructor of 'Cat'
    return a.exec();
}
