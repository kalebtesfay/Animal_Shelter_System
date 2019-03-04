#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
#include <QDebug>

class Client
{
public:
  Client(QString, QString, Qstring);
  -Client();
  QString getId();
  QString getName();
  QString getAddress();
  void print();

private:
  QString id;
  QString name;
  QString address;
};

#endif // CLIENT_H
