#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QTime>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDate today=QDate::currentDate();
    qInfo()<<today;
    qInfo()<<today.addDays(1);
    qInfo()<<today.addYears(20);

    //Differet=nt DateTime tahtn Qt5
    qInfo()<<"ISO Date : "<<today.toString(Qt::DateFormat::ISODate);
    qInfo()<<"ISO Date with MS : "<<today.toString((Qt::DateFormat::ISODateWithMs));
    qInfo()<<"RFCDate : "<<today.toString(Qt::DateFormat::RFC2822Date);
    qInfo()<<"Text Date : "<<today.toString(Qt::DateFormat::TextDate);

    QTime now=QTime::currentTime();
    qInfo()<<"ISO Date : "<<now.toString(Qt::DateFormat::ISODate);
    qInfo()<<"RFC Date : "<<now.toString(Qt::DateFormat::RFC2822Date);
    qInfo()<<"Text Date : "<<now.toString(Qt::DateFormat::TextDate);

    QDateTime current=QDateTime::currentDateTime();
    qInfo()<<current;

    QDateTime expire=current.addDays(45);
    qInfo()<<"Expires on : "<<expire;
    if(current>expire)
    {
        qInfo()<<"Expired!";
    }
    else
    {
        qInfo()<<"Not Expired!";
    }


    return a.exec();
}
