#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bool LightSwitch=false;
    qInfo()<<"Is ON : "<<LightSwitch;
    LightSwitch=true;
     qInfo()<<"Is ON : "<<LightSwitch;
    return a.exec();
}
