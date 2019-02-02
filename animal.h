#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal
{
public:
    Animal(int, string, string);
    ~Animal();
    int getId;
    string getName();
    string getType();


private:
    int id;
    string name;
    string type;


};

#endif // ANIMAL_H
