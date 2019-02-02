#include <iostream>
#include <sstream>
using namespace std;

#include "Control.h"

Control::Control(){}

void Control::launch(){

  int menuSelection = -1;

  //Begin runing loop for the whoel program
  while (menuSelection != 0) {
    //call function for geting menu input
    view.mainMenu(menuSelection);
    //if they want to end the program
    if (menuSelection == 1){
      cout<<"Welcome staff!"<< endl;
    }
    //unless they want to add an event then it will read the event info
    //given and add it to the calendar
    else if (menuSelection == 2) {
      cout<<"Welcome client!"<<endl;
    }
  }

  cout <<"end"<<endl;
}
