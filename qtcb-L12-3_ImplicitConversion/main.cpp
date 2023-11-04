#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double value=5.75;

    qInfo()<<"Double : "<<value;

    int age=value;
    qInfo()<<"Int : "<<age;

    return a.exec();
}
