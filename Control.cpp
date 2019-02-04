#include <iostream>
#include <sstream>
using namespace std;

#include "Control.h"

Control::Control(){}

void Control::launch(){
  // Animal *newAnimal;

  int menuSelection = -1;
  int staffSelection = -1;

  // int id, age;
  // bool neutered;
  // string name, type, sex, height, colour, breed, condition;

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
        //newAnimal = new Animal(int, string, string, string, int, string, string, string, bool, string);
        //shelter.add(newAnimal);
      }
    }

    else if (menuSelection == 2) {
      cout<<"Welcome client!"<<endl;
    }
  }

  cout<<"_____End_____"<<endl;
}
