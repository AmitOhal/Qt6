#include <QCoreApplication>
#include <QDebug>

template<class T,class F>
T add(T valueT,F valueF)
{
    return valueT + valueF;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<add<int,double>(1,4.5);
    qInfo()<<add<double,int>(4.5,1);//Order of Type is important

    qInfo()<<add(55,true);
    qInfo()<<add(true,55);

    //qInfo()<<add(55,"Chris");//Error
    qInfo()<<add("Chris",55);//The output->macos/lib/QtCore.framework/Headers/qbytearrayview.h

    //qInfo()<<add("Chris","Bryan");//error: Invalid operands to binary expression ('const char *' and 'const char *')

    return a.exec();
}
