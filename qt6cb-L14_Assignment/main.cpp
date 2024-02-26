#include <QCoreApplication>
#include <QDebug>

template<class T>
T add(T a,T b)
{
    return a+b;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<"Integer addition : "<<add<int>(10,5);

    qInfo()<<"String concatation : "<<add<QString>(QString("Hello"),QString("World"));

    return a.exec();
}
