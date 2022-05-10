/*
Lazy Husband simulator
*/
#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int max=5;//will order the max times and if exceeeds then break

    QString task="Please take out the trash!";
    for(int i=1;i<=50;i++)
    {
        qInfo()<<"Wife : "<<task;
        qWarning()<<"Wife : I have asked "<<i<<"times";
        if(i>=max)
        {
            qInfo()<<"Husband : Ok Ok...I'm going...";
            break;
        }
        qInfo()<<"Husband : I will after the show";
    }
    qInfo()<<"Done";
    return a.exec();
}
