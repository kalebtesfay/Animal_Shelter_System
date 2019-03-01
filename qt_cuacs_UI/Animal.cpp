#include <iostream>
#include <iomanip>
#include <QString>
using namespace std;

#include "Animal.h"


Animal::Animal(QString id, QString name, QString type, QString sex,
               QString age, QString height, QString colour, QString breed,
               QString neutered, QString condition, QString diet, QString train)
{
    this->id = id;
    this->name = name;
    this->type = type;
    this->sex = sex;
    this->age = age;
    this->height = height;
    this->colour = colour;
    this->breed = breed;
    this->neutered = neutered;
    this->condition = condition;
    this->diet = diet;
    this->train = train;

}
Animal::~Animal(){}

void Animal::print(){
    qDebug().noquote() << "id:         " << id;
    qDebug().noquote() << "name:       " << name;
    qDebug().noquote() << "type:       " << type;
    qDebug().noquote() << "sex:        " << sex;
    qDebug().noquote() << "age:        " << age;
    qDebug().noquote() << "height:     " << height;
    qDebug().noquote() << "colour:     " << colour;
    qDebug().noquote() << "breed:      " << breed;
    qDebug().noquote() << "neutered:   " << neutered;
    qDebug().noquote() << "condition:  " << condition;
    qDebug().noquote() << "diet:       " << breed;
    qDebug().noquote() << "trained:    " << breed;
    qDebug().noquote() << "            ";

}

/*
 * getters for all attributes.
 */
QString Animal::getId(){
    return id;
}

QString Animal::getName(){
    return name;
}

QString Animal::getType(){
    return type;
}

QString Animal::getSex(){
    return sex;
}

QString Animal::getAge(){
    return age;
}

QString Animal::getHeight(){
    return height;
}

QString Animal::getColour(){
  return colour;
}

QString Animal::getBreed(){
    return breed;
}

QString Animal::getNeutered(){
    return neutered;
}

QString Animal::getCondition(){
    return condition;
}

QString Animal::getDiet(){
    return diet;
}

QString Animal::getTrain(){
    return train;
}
