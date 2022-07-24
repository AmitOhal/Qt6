#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QObject>
#include "Freezer.h"
#include "Microwave.h"
#include "Toaster.h"

class Appliance : public QObject,Freezer,Microwave,Toaster
{
    Q_OBJECT
public:
    explicit Appliance(QObject *parent = nullptr);
    // Toaster interface
public:
    bool grill();

    // Microwave interface
public:
    bool cook();

    // Freezer interface
public:
    bool freeze();
signals:



};

#endif // APPLIANCE_H
