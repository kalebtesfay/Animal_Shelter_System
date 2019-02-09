#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>

#include "View.h"
using namespace std;

View::View(){}


void View::mainMenu(int& choice){
  //string str;
  choice  = -1;
  int options = 2;

  cout << endl;
  cout << "(1) Staff" <<endl;
  cout << "(2) Client" << endl;
  cout << "(0) quit" << endl;

  while(choice < 0 || choice > options){
    cout << "Enter your Selection: " <<endl;
    cin >> choice;
  }

}

void View::staffMenu(int& choice){
  //string str;
  choice  = -1;
  int options = 2;

  cout << endl;
  cout << "(1) Would you like to View" <<endl;
  cout << "(2) Add An Animal?" << endl;
  cout << "(0) Back Option" << endl;

  while(choice < 0 || choice > options){
    cout << "Enter your Selection: " << endl;
    cin >> choice;
  }

}


void View::clientMenu(int& choice){
  cout <<"Coming soon in Patch 10.8!"<< endl;
}

void View::readInfo(int& id, string& name, string& type, string& sex, int& age,
                    string& height, string& colour, string& breed, string& neutered,
                    string& condition){
  cout<< "Id: ";
  cin  >> id;
  cout << "Animal Name: ";
  cin.ignore();
  getline(cin,name);
  cout << "Type: ";
  getline(cin,type);
  cout << "Sex: ";
  getline(cin,sex);
  cout<< "Age: ";
  cin  >> age;
  cout << "Height: ";
  cin.ignore();
  getline(cin,height);
  cout << "Colour: ";
  getline(cin,colour);
  cout << "Breed: ";
  getline(cin,breed);
  cout << "Neutered: ";
  getline(cin,neutered);
  //cin >> neutered;
  cout << "Condition: ";
  getline(cin,condition);
}

void View::printShelter(Shelter& s){s.print();}