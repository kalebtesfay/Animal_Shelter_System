#ifndef VIEW_H
#define VIEW_H
using namespace std;

#include "Shelter.h"

class View
{
  public:
    View();
    //Simply moving code from the main into the following member functions
    void mainMenu(int&);
    void staffMenu(int&);
    void clientMenu(int&);
    void readInfo(int&, string&, string&, string&, int&, string&, string&, string&, string&, string&);
    void printShelter(Shelter&);

  private:


};


#endif
