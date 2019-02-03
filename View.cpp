#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>

#include "View.h"
using namespace std;

View::View(){}


void View::mainMenu(int& choice){
  string str;
  choice  = -1;

  while (str != "1" && str != "2") {
    cout << "Who's signing in? '(1) staff' '(2) client': ";
    getline(cin,str);
    if(str == "0"){
      break;
    }
  }
  stringstream ss(str);
  ss >> choice;
}

void View::staffMenu(int& choice){
  string str;
  choice  = -1;

  while (str != "1" && str != "2") {
    cout << "Would you like to View (1) or add (2) an Animal?";
    getline(cin,str);
    if(str == "0"){
      break;
    }
  }
  stringstream ss(str);
  ss >> choice;
}


void View::clientMenu(int& choice){
  cout <<"Cuming soon in Patch 10.8!"<< endl;
}
