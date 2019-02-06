using namespace std;

#include <iostream>
#include <string>

#include "Control.h"

int main(int argc, char* argv[])
{
  //Main will only be responsible for declaring control object and
  //calling the launch member function that starts the whole program.
  Control control;
  control.launch();
  return 0;
}
