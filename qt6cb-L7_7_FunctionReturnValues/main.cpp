/*
Function returning values
*/
#include <QCoreApplication>
#include<QDebug>

/*
QObject get_object(QString name)
{
    QObject o;
    o.setObjectName(name);
    return o;//Make a copy
}
*/

QObject& get_ref(QString name)
{
    QObject o;//On the stack , C++ manages for us
    o.setObjectName(name);
    return o;
}

QObject* get_ptr(QString name)
{
    QObject *o=new QObject();//On the heap,we will manage this memory allocation
    o->setObjectName(name);
    return o;//will NOT be deleted by C++ automatically
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //QObject o1=get_object("ByVal");
    //QObject o2=get_ref("ByRef");

    QObject *o3=get_ptr("ByPtr");
    qInfo()<<o3;
    delete o3;
    qInfo()<<"Deleting the object";
    if(!o3)
    {
        qInfo()<<"Deleting allocated memory";
        delete o3;
    }
    return a.exec();
}
