#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qint8 value8=0;
    qint16 value16=0;
    qint32 value32=0;
    qint64 value64=0;
    qintptr valueptr=0;

    qInfo()<<"value8 : "<<sizeof(value8);
    qInfo()<<"value16 : "<<sizeof(value16);
    qInfo()<<"Value32 : "<<sizeof(value32);
    qInfo()<<"Value64 : "<<sizeof(value64);
    qInfo()<<"valueptr : "<<sizeof(valueptr);

    return a.exec();
}
