/*
Build using cmake build system
Usage of comments :
1.Single line
2.Multi Line
3.Documentation

*/

/*!
@build : cmake
@argc : argument count
@argv : arguments
@return : integer value which exits the application
@debuging Header : QDebug
*/

#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo()<<"Hello World";
    return a.exec();
}
