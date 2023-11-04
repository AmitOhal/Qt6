#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double value=5.75;
    qInfo()<<"Double : "<<value;

    int age=value;
    qInfo()<<"Int : "<<age;//Implicit casting should not be trusted

    age=(int)value;//We are controlling the data type conversion
    qInfo()<<"Int : "<<age;//Explicit conversion should be trusted
    return a.exec();
}
