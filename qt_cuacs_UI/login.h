#ifndef LOGIN_H
#define LOGIN_H
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

class login
{
public:
    login();
    QSqlDatabase db;
    void dbClose(){
        db.close();
    }
    bool dbOpen(){
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
};

#endif // LOGIN_H
