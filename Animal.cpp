using namespace std;

#include "Animal.h"
#include <string>


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
