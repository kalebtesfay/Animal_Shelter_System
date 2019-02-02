#include "animal.h"
#include <string>

Animal::Animal(int id, string name, string type)
{
    this->id = id;
    this->name = name;
    this->type = type;

}
Animal::~Animal()
{

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
