#include <QCoreApplication>
#include <QDebug>

void test(QString name)//Copy
{
    qInfo()<<name;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name="Amit Ohal";
    qInfo()<<name;
    qInfo()<<name.mid(1,3);
    qInfo()<<name.insert(0,"Mr.");
    qInfo()<<name.split(" ");

    int index=name.indexOf(" ");
    if(index>-1)
    {
        qInfo()<<name.remove(0,index).trimmed();
    }

    QString title="Teacher";
    QString full=name.trimmed()+ " "+ title;
    qInfo()<<full;

    qInfo()<<full.toUtf8();

    test(full);

    return a.exec();
}
