#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include "radio.h"
#include "station.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Radio boombox;

    Station* channels[3];

    //create some station
    channels[0]=new Station(&boombox,94,"Rock and Roll station");
    channels[1]=new Station(&boombox,87,"Hip Hop");
    channels[2]=new Station(&boombox,101,"News");

    boombox.connect(&boombox,&Radio::quit,&a,&QCoreApplication::quit,Qt::QueuedConnection);

    for(int i=0;i<3;i++)
    {
        Station* channel=channels[i];
        boombox.connect(channel,&Station::send,&boombox,&Radio::listen);
    }
    do
    {
        qInfo()<<"Enter on, off,test or quit";
        QTextStream qtin(stdin);
        QString line=qtin.readLine().trimmed().toUpper();
        if(line=="ON")
        {
            qInfo()<<"Turning the radio ON";
            for(int i=0;i<3;i++)
            {
                Station* channel=channels[i];
                boombox.connect(channel,&Station::send,&boombox,&Radio::listen);
            }
            qInfo()<<"Radio is ON";
        }
        if(line=="OFF")
        {
            qInfo()<<"Turning the radio off";
            for(int i=0;i<3;i++)
            {
                Station* channel=channels[i];
                boombox.disconnect(channel,&Station::send,&boombox,&Radio::listen);
            }
            qInfo()<<"Radio is OFF";
        }
        if(line=="TEST")
        {
            qInfo()<<"Testing";
            for(int i=0;i<3;i++)
            {
                Station* channel=channels[i];
                channel->broadcast("Broadcasting live!");
            }
            qInfo()<<"Broadcast Test complete";
        }
        if(line=="QUIT")
        {
            qInfo()<<"Quitting";
            emit boombox.quit();
            break;
        }
    }while(true);
    return a.exec();
}
