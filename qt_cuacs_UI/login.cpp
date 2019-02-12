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
    db.removeDatabase(QSqlDatabase::defaultConnection);
}

bool login::dbOpen(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/student/COMP3004/Animal_Shelter_System/qt_cuacs_UI/database/database.db");

    if(!db.open()){
        qDebug()<<("FAILED TO OPEN");
        return false;
    }else{
        qDebug()<<("DATABASE CONNECTED");
        return true;
    }

}

void login::dbLaunch(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/student/COMP3004/Animal_Shelter_System/qt_cuacs_UI/database/database.db");

    if(db.open()){
        qDebug() << "DB CONNECTED";
    }else{
        qDebug() << "DB NOT CONNECTED";
    }

    QSqlQuery qu;
    qu.exec("SELECT * FROM ANIMAL");

    while(qu.next()){
        QString id = qu.value(0).toString();
        QString name = qu.value(1).toString();
        QString type = qu.value(2).toString();
        QString sex = qu.value(3).toString();
        QString age = qu.value(4).toString();
        QString height = qu.value(5).toString();
        QString colour = qu.value(6).toString();
        QString breed = qu.value(7).toString();
        QString neutered = qu.value(8).toString();
        QString condition= qu.value(9).toString();

        qDebug().noquote() << "id:        " << id;
        qDebug().noquote() << "name:      " << name;
        qDebug().noquote() << "type:      " << type;
        qDebug().noquote() << "sex:       " << sex;
        qDebug().noquote() << "age:       " << age;
        qDebug().noquote() << "height:    " << height;
        qDebug().noquote() << "colour:    " << colour;
        qDebug().noquote() << "breed:     " << breed;
        qDebug().noquote() << "neutered:  " << neutered;
        qDebug().noquote() << "condition: " << condition;
        qDebug().noquote() << "";
    }
}
