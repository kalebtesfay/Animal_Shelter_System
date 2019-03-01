#ifndef ANIMAL_H
#define ANIMAL_H
#include <QString>
#include <QDebug>


class Animal
{
public:
    Animal(QString, QString, QString, QString, QString, QString, QString, QString, QString, QString, QString, QString);
    ~Animal();
    QString getId();
    QString getName();
    QString getType();
    QString getSex();
    QString getAge();
    QString getHeight();
    QString getColour();
    QString getBreed();
    QString getNeutered();
    QString getCondition();
    QString getDiet();
    QString getTrain();
    void print();

private:
    QString id;
    QString name;
    QString type;
    QString sex;
    QString age;
    QString height;
    QString colour;
    QString breed;
    QString neutered;
    QString condition;
    QString diet;
    QString train;

};

#endif // ANIMAL_H
