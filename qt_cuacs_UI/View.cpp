#include <iostream>
#include <iomanip>
#include <QString>
#include <sstream>
#include <cstdlib>

#include "View.h"
using namespace std;

View::View(){}


void View::mainMenu(int& choice){
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

//void View::readInfo(QString& id, QString& name, QString& type, QString& sex, QString& age,
//                    QString& height, QString& colour, QString& breed, QString& neutered,
//                    QString& condition){
//  cout<< "Id(6 or Higher): ";
//  getline(cin,id);
////  while(id < 6){
////      cout << "Incorrect Input!" << endl;
////      cout << "Id (6 or Higher): ";
////      cin >> id;
////  }
//  cout << "Animal Name: ";
//  getline(cin,name);
//  cout << "Type: ";
//  getline(cin,type);
//  cout << "Sex: ";
//  getline(cin,sex);
//  cout<< "Age: ";
//  getline(cin,age);
//  cout << "Height: ";
//  getline(cin,height);
//  cout << "Colour: ";
//  getline(cin,colour);
//  cout << "Breed: ";
//  getline(cin,breed);
//  cout << "Neutered: ";
//  getline(cin,neutered);
//  cout << "Condition: ";
//  getline(cin,condition);
//}

void View::printShelter(Shelter& s){s.print();}
