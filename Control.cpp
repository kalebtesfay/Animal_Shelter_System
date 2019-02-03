#include <iostream>
#include <sstream>
using namespace std;

#include "Control.h"

Control::Control(){}

void Control::launch(){

  int menuSelection = -1;
  int staffSelection = -1;

  cout<<"_____System Start_____"<<endl;

  //Begin runing loop for the whoel program
  while (menuSelection != 0) {
    //call function for geting menu input
    view.mainMenu(menuSelection);
    //if they want to end the program
    if (menuSelection == 1){
      cout<<"Welcome staff!"<< endl;
      view.staffMenu(staffSelection);
      if(staffSelection == 1){
        cout<<"Call to print function in database"<<endl;
      }
      else if (staffSelection == 2){
        cout<<"Call to add function."<<endl;
      }
    }
    //unless they want to add an event then it will read the event info
    //given and add it to the calendar
    else if (menuSelection == 2) {
      cout<<"Welcome client!"<<endl;
    }
  }

  cout<<"_____End_____"<<endl;
}
