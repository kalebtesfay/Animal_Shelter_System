#ifndef CONTROL_H
#define CONTROL_H
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <QCoreApplication>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
using namespace std;

#include "View.h"
#include "Shelter.h"


class Control
{
  public:
    Control();
    void launch();
    void dbLaunch();

  private:
    View view;
    Shelter shelter;
};

#endif
