#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <QCoreApplication>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QMainWindow>
#include "login.h"


login::login()
{

}

void login::dbClose(){
    db.close();
}

bool login::dbOpen(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/student/COMP3004/Animal_Shelter_System/qt_cuacs_UI/database/database");

    if(!db.open()){
        qDebug()<<("FAILED TO OPEN");
        return false;
    }else{
        qDebug()<<("DATABASE CONNECTED");
        return true;
    }

}
