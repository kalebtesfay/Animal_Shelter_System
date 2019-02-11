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
using namespace std;

#include "Control.h"

Control::Control(){}

void Control::launch(){
    Animal *newAnimal;
    int choice, choiceTwo;
    int id, age;
    string name, type, sex, height, colour, breed, neutered, condition;

    while(1){
        choice = -1;
        view.mainMenu(choice);
        if(choice == 0){
            break;
        }
        else if(choice == 1){
            choiceTwo = -1;
            cout<<"Welcome Staff!"<< endl;
            view.staffMenu(choiceTwo);
            if(choiceTwo == 1){
                dbLaunch();
                view.printShelter(shelter);
            }else if(choiceTwo == 2){
                view.readInfo(id, name, type, sex, age, height, colour, breed, neutered, condition);
                newAnimal = new Animal(id, name, type, sex, age, height, colour, breed, neutered, condition);
                shelter.add(newAnimal);
            }
        }else if(choice == 2){
            cout<<"Welcome Client!"<<endl;
        }
    }
    cout<<" "<<endl;
    cout<<"DATABASE"<<endl;
    dbLaunch();
    view.printShelter(shelter);
}

void Control::dbLaunch(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/student/COMP3004/Animal_Shelter_System/qt_cuacs_UI/database/database");

    if(db.open()){
        qDebug() << "DB CONNECTED";
    }else{
        qDebug() << "DB NOT CONNECTED" << db.lastError();
    }

    QSqlQuery query("CREATE TABLE ANIMAL(id INTEGER PRIMARY KEY, name TEXT NOT NULL,type TEXT NOT NULL, sex TEXT NOT NULL, age INT, height TEXT NOT NULL, colour TEXT NOT NULL, breed TEXT NOT NULL, neutered TEXT NOT NULL, condition TEXT NOT NULL)");
    QSqlQuery insertToAnimal;
    insertToAnimal.exec("insert into ANIMAL(id, name, type, sex, age, height, colour, breed, neutered, condition)"
                     "values(1, 'Rex', 'Dog', 'Male', 2, '50cm', 'Black', 'Pitbull', 'No', 'Healthy')");
    insertToAnimal.exec("insert into ANIMAL(id, name, type, sex, age, height, colour, breed, neutered, condition)"
                     "values(2, 'Daisy', 'Dog', 'Female', 1, '30cm', 'Orange', 'Boxer', 'Yes', 'Healthy')");
    insertToAnimal.exec("insert into ANIMAL(id, name, type, sex, age, height, colour, breed, neutered, condition)"
                     "values(3, 'Coco', 'Cat', 'Female', 6, '20cm', 'Brown', 'Persian', 'Yes', 'Not Healthy')");
    insertToAnimal.exec("insert into ANIMAL(id, name, type, sex, age, height, colour, breed, neutered, condition)"
                     "values(4, 'Jack', 'Cat', 'Male', 5, '10cm', 'White', 'Ragdoll', 'Yes', 'Healthy')");
    insertToAnimal.exec("insert into ANIMAL(id, name, type, sex, age, height, colour, breed, neutered, condition)"
                     "values(5, 'Gus', 'Hamster', 'Male', 1, '6cm', 'Brown', 'Chinese', 'Yes', 'Healthy')");

    QSqlQuery query2("CREATE TABLE STAFF(id INTEGER PRIMARY KEY, name TEXT NOT NULL)");
    QSqlQuery insertToStaff;
    insertToStaff.exec("insert into STAFF(id, name)"
                     "values(1, 'Kaleb Tesfay')");
    insertToStaff.exec("insert into STAFF(id, name)"
                     "values(2, 'Adam Farah')");
    insertToStaff.exec("insert into STAFF(id, name)"
                     "values(3, 'Japi Sandhu')");
    insertToStaff.exec("insert into STAFF(id, name)"
                     "values(4, 'Lauryn Esparza')");
    insertToStaff.exec("insert into STAFF(id, name)"
                     "values(5, 'Jaiden Kelly')");

    QSqlQuery query3("CREATE TABLE CLIENT(id INTEGER PRIMARY KEY, name TEXT NOT NULL, address TEXT NOT NULL)");
    QSqlQuery insertToClient;
    insertToClient.exec("insert into CLIENT(id, name, address)"
                      "values(1, 'Wilfred James', '3670 Glory Road')");
    insertToClient.exec("insert into CLIENT(id, name, address)"
                      "values(2, 'Mona Lane', '2257 Berry Street')");
    insertToClient.exec("insert into CLIENT(id, name, address)"
                      "values(3, 'Steve Blake', '3441 Cemetery Street')");
    insertToClient.exec("insert into CLIENT(id, name, address)"
                      "values(4, 'Josh Rich', '2795 Green Hill Road')");
    insertToClient.exec("insert into CLIENT(id, name, address)"
                      "values(5, 'Marlee Sparks', '4162 Adams Drive')");

    QSqlQuery q;
    q.exec("SELECT * FROM ANIMAL");

    while(q.next()){
        int id = q.value(0).toInt();
        QString name = q.value(1).toString();
        QString type = q.value(2).toString();
        QString sex = q.value(3).toString();
        int age = q.value(4).toInt();
        QString height = q.value(5).toString();
        QString colour = q.value(6).toString();
        QString breed = q.value(7).toString();
        QString neutered = q.value(8).toString();
        QString condition= q.value(9).toString();

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
