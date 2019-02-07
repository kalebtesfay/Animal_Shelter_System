#ifndef CONTROL_H
#define CONTROL_H
using namespace std;

#include "View.h"
#include "Shelter.h"


class Control
{
  public:
    Control();
    void launch();
  private:
    View view;
    Shelter shelter;
};

#endif
