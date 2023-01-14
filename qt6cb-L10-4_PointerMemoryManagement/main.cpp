#include <QCoreApplication>
#include <QDebug>

void display(QString *value)
{
    qInfo()<<"The pointer : "<<value;
    qInfo()<<"The address : "<<&value;
    qInfo()<<"The data : "<< *value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name="Bryan";//Stack - C++ manages this
    QString *description=new QString("Hello Pointer");

    qInfo()<<"The address of pointer variable is at : "<<&description;
    display(description);
    qInfo()<<description;
    if(description)
        delete description;
    else
        qInfo()<<"Pointer does not exists";

    return a.exec();
}
