#include <iostream>
#include <iomanip>
#include <QString>
using namespace std;

#include "Client.h"

Client::Client(QString id, QString name, QString address)
{
  this->id = id;
  this->name = name;
  this->address = address;

}

Client::~Client(){}

void Client::print(){
  qDebug().noquote() << "id:         " << id;
  qDebug().noquote() << "name:       " << name;
  qDebug().noquote() << "address:    " << address;
  qDebug().noquote() << "            ";
}

QString Client::getId(){
  return id;
}

QString Client::getName(){
  return name;
}

QString Client::getAddress(){
  return address;
}
