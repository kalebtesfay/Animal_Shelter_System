#include <iostream>
#include <iomanip>
#include <sstream>
#include <QString>
#include <QCoreApplication>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
using namespace std;

#include "Control.h"

Control::Control(){}

/*
 * Class used to first
 * generate the database.
 */
void Control::dbLaunch(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/student/COMP3004/D2/Animal_Shelter_System/qt_cuacs_UI/database/database.db");

    if(db.open()){
        qDebug() << "DB CONNECTED";
    }else{
        qDebug() << "DB NOT CONNECTED" << db.lastError();
    }

    QSqlQuery query("CREATE TABLE ANIMAL(id TEXT PRIMARY KEY, name TEXT, type TEXT, sex TEXT, age TEXT, height TEXT, colour TEXT, breed TEXT, neutered TEXT, condition TEXT, diet TEXT, train TEXT)");
    QSqlQuery insertToAnimal;
    insertToAnimal.exec("insert into ANIMAL(id, name, type, sex, age, height, colour, breed, neutered, condition, diet, train)"
                     "values('1', 'Rex', 'Dog', 'Male', '2', '50cm', 'Black', 'Pitbull', 'No', 'Healthy', 'Yes', 'Yes')");
    insertToAnimal.exec("insert into ANIMAL(id, name, type, sex, age, height, colour, breed, neutered, condition, diet, train)"
                     "values('2', 'Daisy', 'Dog', 'Female', '1', '30cm', 'Orange', 'Boxer', 'Yes', 'Healthy', 'No', 'No')");
    insertToAnimal.exec("insert into ANIMAL(id, name, type, sex, age, height, colour, breed, neutered, condition, diet, train)"
                     "values('3', 'Coco', 'Cat', 'Female', '6', '20cm', 'Brown', 'Persian', 'Yes', 'Not Healthy', 'Yes', 'Yes')");
    insertToAnimal.exec("insert into ANIMAL(id, name, type, sex, age, height, colour, breed, neutered, condition, diet, train)"
                     "values('4', 'Jack', 'Cat', 'Male', '5', '10cm', 'White', 'Ragdoll', 'Yes', 'Healthy', 'No', 'Yes')");
    insertToAnimal.exec("insert into ANIMAL(id, name, type, sex, age, height, colour, breed, neutered, condition, diet, train)"
                     "values('5', 'Gus', 'Hamster', 'Male', '1', '6cm', 'Brown', 'Chinese', 'Yes', 'Healthy', 'Yes', 'Yes')");

    QSqlQuery query2("CREATE TABLE STAFF(id TEXT PRIMARY KEY, name TEXT)");
    QSqlQuery insertToStaff;
    insertToStaff.exec("insert into STAFF(id, name)"
                     "values('1', 'Kaleb Tesfay')");
    insertToStaff.exec("insert into STAFF(id, name)"
                     "values('2', 'Adam Farah')");
    insertToStaff.exec("insert into STAFF(id, name)"
                     "values('3', 'Japi Sandhu')");
    insertToStaff.exec("insert into STAFF(id, name)"
                     "values('4', 'Samson Teklay')");
    insertToStaff.exec("insert into STAFF(id, name)"
                     "values('5', 'Lauryn Esparza)");

    QSqlQuery query3("CREATE TABLE CLIENT(id TEXT PRIMARY KEY, name TEXT, address TEXT)");
    QSqlQuery insertToClient;
    insertToClient.exec("insert into CLIENT(id, name, address)"
                      "values('1', 'Wilfred James', '3670 Glory Road')");
    insertToClient.exec("insert into CLIENT(id, name, address)"
                      "values('2', 'Mona Lane', '2257 Berry Street')");
    insertToClient.exec("insert into CLIENT(id, name, address)"
                      "values('3', 'Steve Blake', '3441 Cemetery Street')");
    insertToClient.exec("insert into CLIENT(id, name, address)"
                      "values('4', 'Josh Rich', '2795 Green Hill Road')");
    insertToClient.exec("insert into CLIENT(id, name, address)"
                      "values('5', 'Marlee Sparks', '4162 Adams Drive')");

    QSqlQuery q;
    q.exec("SELECT * FROM ANIMAL");

    while(q.next()){
        QString id = q.value(0).toString();
        QString name = q.value(1).toString();
        QString type = q.value(2).toString();
        QString sex = q.value(3).toString();
        QString age = q.value(4).toString();
        QString height = q.value(5).toString();
        QString colour = q.value(6).toString();
        QString breed = q.value(7).toString();
        QString neutered = q.value(8).toString();
        QString condition= q.value(9).toString();
        QString diet = q.value(10).toString();
        QString train = q.value(11).toString();

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
        qDebug().noquote() << "diet:      " << diet;
        qDebug().noquote() << "train:     " << train;
        qDebug().noquote() << "";
    }

}
