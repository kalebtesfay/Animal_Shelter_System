#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <QCoreApplication>
#include <QtSql>
#include <QSqlDatabase>
#include <QSql>
#include <QString>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QFile>
#include <QDir>
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
    db.setDatabaseName("/home/student/COMP3004/D2/Animal_Shelter_System/qt_cuacs_UI/database/database.db");
    if(!db.open()){
        qDebug() << ("FAILS TO CONNECT");
        return false;
    }else{
        qDebug() << ("DATABASE CONNECTED");
        return true;
    }

}

void login::dbLaunch(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/student/COMP3004/D2/Animal_Shelter_System/qt_cuacs_UI/database/database.db");
    if(db.open()){
        qDebug() << "DB CONNECTED";
    }else{
        qDebug() << "DB NOT CONNECTED";
    }

    QSqlQuery qu;
    qu.exec("SELECT * FROM ANIMAL");

    while(qu.next()){
        QString type = q.value(0).toString();
        QString breed = q.value(1).toString();
        QString name = q.value(2).toString();
        QString sex = q.value(3).toString();
        QString age = q.value(4).toString();
        QString social = q.value(5).toString();
        QString condition = q.value(6).toString();
        QString diet = q.value(7).toString();
        QString train = q.value(8).toString();
        QString nocturnal = q.value(9).toString();
        QString emotion = q.value(10).toString();
        QString petWorth = q.value(11).toString();
        QString parental = q.value(12).toString();
        QString allergies = q.value(13).toString();
        QString stability = q.value(14).toString();
        QString res = q.value(15).toString();



        /*
         * Dynamically Allocates the Database first
         *          Entries into Memory
         *            (Linked List)
         */
        Animal *newAnimal;
        newAnimal = new Animal(type, breed, name, sex, age, social, condition, diet, train, nocturnal, emotion, petWorth, parental, allergies, nocturnal, res);
        s.add(newAnimal);

        qDebug().noquote() << "type:      " << type;
        qDebug().noquote() << "breed:     " << breed;
        qDebug().noquote() << "name:      " << name;
        qDebug().noquote() << "sex:       " << sex;
        qDebug().noquote() << "age:       " << age;
        qDebug().noquote() << "social:    " << social;
        qDebug().noquote() << "condition: " << condition;
        qDebug().noquote() << "diet:      " << diet;
        qDebug().noquote() << "trained:   " << train;
        qDebug().noquote() << "nocturnal: " << nocturnal;
        qDebug().noquote() << "emotion:   " << emotion;
        qDebug().noquote() << "petWorth:  " << petWorth;
        qDebug().noquote() << "parental:  " << parental;
        qDebug().noquote() << "allergies: " << allergies;
        qDebug().noquote() << "stability: " << stability;
        qDebug().noquote() << "housing:   " << res;
        qDebug().noquote() << "";
    }
}
