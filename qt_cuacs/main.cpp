using namespace std;
#include <iostream>
#include <string>
#include <QCoreApplication>
#include "Control.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Control control;
    control.launch();

    return a.exec();
}
