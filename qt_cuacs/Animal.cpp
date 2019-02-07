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
  cout<<"id:"<<setfill(' ')<<setw(25)<<id<<endl;
  cout<<"name:"<<setfill(' ')<<setw(23)<<name<<endl;
  cout<<"type:"<<setfill(' ')<<setw(23)<<type<<endl;
  cout<<"sex:"<<setfill(' ')<<setw(24)<<sex<<endl;
  cout<<"age:"<<setfill(' ')<<setw(24)<<age<<endl;
  cout<<"height:"<<setfill(' ')<<setw(21)<<height<<endl;
  cout<<"colour:"<<setfill(' ')<<setw(21)<<colour<<endl;
  cout<<"breed:"<<setfill(' ')<<setw(22)<<breed<<endl;
  cout<<"neutered:"<<setfill(' ')<<setw(19)<<neutered<<endl;
  cout<<"condition:"<<setfill(' ')<<setw(18)<<condition<<endl;
  cout<<""<<endl;

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
