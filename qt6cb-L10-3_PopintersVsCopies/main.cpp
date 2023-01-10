#include <QCoreApplication>
#include <QDebug>

void test(QString value)//Stack - COPY
{
    qInfo()<<&value<<"Value : "<<value<<"Size : "<<value.length();
}//C++ will automatically delete from Stask

void testPtr(QString *value)//Stack - Pointing to memory
{
    qInfo()<<"Pointed memory address passed : "<<value<<"Size : "<<"Value changed directly at address : "<<value->append("Tom")<<value->length();
    qInfo()<<"Actual memory address of Pointer variable : "<<&value<<"Size : "<<value->length();
}//C++ will automatically delete from stack

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString name="Bryan";

    qInfo()<<"Memory address of original variable : "<<&name<<"Size : "<<name.length();
    test(name);//Passing copy

    testPtr(&name);

    test(name);//Passing copy

    return a.exec();
}
