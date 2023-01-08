#include <QCoreApplication>
#include<QDebug>

QString name="Bryan";

void testing()
{
    qInfo()<<name;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    name="Bob";//Bob
    qInfo()<<name;

    bool test=true;
    if(test)
    {
        QString name="Tammy";
        qInfo()<<name;//Tammy
        qInfo()<<::name;//Bob
    }
    qInfo()<<name;//Bob
    testing();
    return a.exec();
}
