#include<QDebug>
#include "feline.h"

Feline::Feline(QObject *parent)
    : QObject{parent}
{
    qInfo()<<this<<" Feline constructor";
}

void Feline::speak()
{
    qInfo()<<this<<" Feline meow";
}
