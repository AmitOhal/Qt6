#include <QCoreApplication>
#include <QDebug>

void test(QObject object)//Copy
{
    qInfo()<<&object<<Q_FUNC_INFO;
}

void testPtr(QObject *object)//Pointer
{
    qInfo()<<object<<Q_FUNC_INFO;
}

/*
QObject getObject()
{
    QObject o;
    return o;//return a Copy
}
*/

QObject* getObject()
{
    QObject *o=new QObject();//Creating memory in heap
    return o;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject* p=getObject();
    testPtr(p);

    if(p)
    {
        qInfo()<<"Pointer is in memory";
        delete p;
        qInfo()<<"Deleting memory";
        qInfo()<<"After deleting pointer";
        testPtr(p);//No call to testPtr()
    }
    else
        qInfo()<<"Pointer is deleted";
    return a.exec();
}
