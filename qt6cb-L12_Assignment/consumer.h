#ifndef CONSUMER_H
#define CONSUMER_H

#include <QObject>
#include<QDebug>
#include "producer.h"

class Consumer : public QObject
{
    Q_OBJECT
public:
    explicit Consumer(QObject *parent = nullptr);

public slots :
    void testing();
signals:

};

#endif // CONSUMER_H
