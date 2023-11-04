#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    count=0;
    connect(&m_Timer,&QTimer::timeout,this,&Test::timeout);
    m_Timer.setInterval(1000);
    m_Timer.start();
}

void Test::timeout()
{
    qInfo()<<"Test!"<<" "<<count;
    count++;
    if(count>10)
    {
        m_Timer.stop();
        qInfo()<<"Done!";
    }
}
