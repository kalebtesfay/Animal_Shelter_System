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
    cout << "Who's signing in?: ";
    getline(cin,str);
    if(str == "0"){
      break;
    }
  }
  stringstream ss(str);
  ss >> choice;
}
