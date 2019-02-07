#include <iostream>
#include <sstream>
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
        view.printShelter(shelter);

      }else if(choiceTwo == 2){
        view.readInfo(id, name, type, sex, age, height, colour, breed, neutered, condition);
        newAnimal = new Animal(id, name, type, sex, age, height, colour, breed, neutered, condition);
        shelter.add(newAnimal);

      }

    }else if(choice == 2){
      cout<<"Welcome client!"<<endl;

    }

  }
  cout<<" "<<endl;
  cout<<"DATABASE"<<endl;
  view.printShelter(shelter);
}
