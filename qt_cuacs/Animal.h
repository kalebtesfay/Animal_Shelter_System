#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>


class Animal
{
public:
    Animal(int, string, string, string, int, string, string, string, string, string);
    ~Animal();
    int getId();
    string getName();
    string getType();
    string getSex();
    int getAge();
    string getHeight();
    string getColour();
    string getBreed();
    string getNeutered();
    string getCondition();
    void print();



private:
    int id;
    string name;
    string type;
    string sex;
    int age;
    string height;
    string colour;
    string breed;
    string neutered;
    string condition;





};

#endif // ANIMAL_H
