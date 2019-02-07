using namespace std;
#include <iostream>
#include <string>
#include <QCoreApplication>
#include <QtSql>
#include <QDebug>
#include "Control.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Control control;
    control.launch();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/student/COMP3004/Animal_Shelter_System/qt_cuacs/database/database");
    //db.open();

    if(db.open()){
        qDebug() << "DB CONNECTED";
    }else{
        qDebug() << "DB NOT CONNECTED" << db.lastError();
    }

    return a.exec();
}
