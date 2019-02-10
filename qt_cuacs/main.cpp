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
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Control control;
    control.launch();
    MainWindow w;
    w.show();
    return a.exec();
}
