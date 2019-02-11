#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Animal.h"


Animal::Animal(int id, string name, string type, string sex,
               int age, string height, string colour, string breed,
               string neutered, string condition)
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

}
Animal::~Animal(){}

void Animal::print(){
    cout << "id:         " << id        << endl;
    cout << "name:       " << name      << endl;
    cout << "type:       " << type      << endl;
    cout << "sex:        " << sex       << endl;
    cout << "age:        " << age       << endl;
    cout << "height:     " << height    << endl;
    cout << "colour:     " << colour    << endl;
    cout << "breed:      " << breed     << endl;
    cout << "neutered:   " << neutered  << endl;
    cout << "condition:  " << condition << endl;
    cout <<""<<endl;

}
int Animal::getId(){
    return id;
}

string Animal::getName(){
    return name;
}

string Animal::getType(){
    return type;
}

string Animal::getSex(){
    return sex;
}

int Animal::getAge(){
    return age;
}

string Animal::getHeight(){
    return height;
}

string Animal::getColour(){
  return colour;
}

string Animal::getBreed(){
    return breed;
}

string Animal::getNeutered(){
    return neutered;
}

string Animal::getCondition(){
    return condition;
}
