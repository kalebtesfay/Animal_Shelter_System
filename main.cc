/* * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                 */
/*  Program:  Simple Event Management System       */
/*  Author:   Christine Laurendeau                 */
/*  Date:     07-JUN-2018                          */
/*                                                 */
/*  (c) 2018 Christine Laurendeau                  */
/*  All rights reserved.  Distribution and         */
/*  reposting, in part or in whole, without the    */
/*  written consent of the author, is illegal.     */
/*                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * */
using namespace std;

#include <iostream>
#include <string>

#include "Control.h"

int main()
{
  //Main will only be responsible for declaring control object and
  //calling the launch member function that starts the whole program.
  Control control;
  control.launch();
  return 0;
}
