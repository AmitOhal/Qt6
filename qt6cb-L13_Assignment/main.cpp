#include <QCoreApplication>
#include <QDebug>

void test(int age)
{
    try
    {
        if(age<=0)
            throw QString("Not a valid age");
        if(age<=21)
            throw QString("You are not an adult");
    }
    catch(QString e)
    {
        qCritical()<<e;
        return;
    }
    catch (...)
    {
        qCritical()<<"Unknown error";
        return;
    }

    //Finally here
    qInfo()<<"Your age : "<<age;

}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test(13);
    test(45);
    test(-3);

    return a.exec();
}
