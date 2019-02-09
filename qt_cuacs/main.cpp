using namespace std;
#include <iostream>
#include <string>
#include <QCoreApplication>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include "Control.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Control control;
    control.launch();
    return a.exec();
}
