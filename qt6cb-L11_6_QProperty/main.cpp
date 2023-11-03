#include <QCoreApplication>
#include <QVariant>
#include "test.h"
#include "watcher.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test tester;
    watcher destination;

    QObject::connect(&tester,&test::messageChanged,&destination,&watcher::messageChanged);

    tester.setProperty("message",QVariant("Hello World"));

    tester.setMessage("testing");
    return a.exec();
}
