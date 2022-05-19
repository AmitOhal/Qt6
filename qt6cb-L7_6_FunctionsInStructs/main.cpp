/*
Functions in Structs
*/
#include <QCoreApplication>
#include<QDebug>

//Struc is used manily to represent data and should not change the data on the runtime
struct laptop
{
  int weight;
  double asKilograms(){
      return weight*0.453592;//data is changing
  }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    laptop notebook;
    notebook.weight=5;

    qInfo()<<"Pounds : "<<notebook.weight;
    qInfo()<<"Kilograms : "<<notebook.asKilograms();
    return a.exec();
}
