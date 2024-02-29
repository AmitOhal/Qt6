#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data="Hello Wrold how are you";
    QStringList lst=data.split(" ");
    qInfo()<<lst;

    foreach (QString str, lst) {
        qInfo()<<str;
    }

    lst.sort(Qt::CaseInsensitive);
    qInfo()<<lst;

    QString myvar="Hello";

    if(lst.contains(myvar))
    {
        int index=lst.indexOf(myvar);
        qInfo()<<"index : "<<index<<"value : "<<lst.value(index);
    }
    else
    {
        qInfo()<<lst.value(0);
    }
    return a.exec();
}
