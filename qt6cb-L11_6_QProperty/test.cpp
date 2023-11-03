#include "test.h"

test::test(QObject *parent)
    : QObject{parent}
{

}

QString test::message() const
{
    return m_message;
}

void test::setMessage(const QString &message)
{
    m_message=message;
    emit messageChanged(m_message);
}
