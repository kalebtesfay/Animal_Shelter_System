#include <iostream>
#include <sstream>
using namespace std;

#include "Control.h"

Control::Control(){}

void Control::launch(){
  Animal *newAnimal;

  int menuSelection = -1;
  int staffSelection = -1;

  int id, age;
  bool neutered;
  string name, type, sex, height, colour, breed, temp_n, condition;

  cout<<"_____System Start_____"<<endl;

  while (menuSelection != 0) {

    view.mainMenu(menuSelection);

    if (menuSelection == 1){
      cout<<"Welcome staff!"<< endl;
      view.staffMenu(staffSelection);

      if(staffSelection == 1){
        cout<<"Call to print function."<<endl;
        view.printShelter(shelter);
      }

      else if (staffSelection == 2){
        cout<<"Call to add function."<<endl;
        view.readInfo(id, name, type, sex, age, height, colour, breed, temp_n, condition);
        if(temp_n == "yes"){
          neutered = true;
          newAnimal = new Animal(id, name, type, sex, age, height, colour, breed, neutered, condition);
          shelter.add(newAnimal);
        }
        else if(temp_n == "no"){
          neutered = false;
          newAnimal = new Animal(id, name, type, sex, age, height, colour, breed, neutered, condition);
          shelter.add(newAnimal);
        }
      }
    }

    else if (menuSelection == 2) {
      cout<<"Welcome client!"<<endl;
    }
  }

  cout<<"_____End_____"<<endl;
}
