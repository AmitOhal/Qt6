#ifndef CAT_H
#define CAT_H

#include <QObject>

class Cat : public QObject
{
    Q_OBJECT
public:
    explicit Cat(QObject *parent = nullptr);

    void meow();

    bool Hungray() const;
    void setHungray(bool newHungray);

signals:

private :
    bool m_Hungray;

};

#endif // CAT_H
