#ifndef ACM_H
#define ACM_H
#include <QString>
#include <QDebug>
#include "AnimalList.h"


class ACM : public Animal
{
public:
    ACM(QString, QString, QString, QString,
        QString, QString, QString, QString,
        QString, QString, QString, QString,
        QString, QString, QString, QString);
    ~ACM();
    int scoringSystem();

private:
    //Animal& a;
    int weight;
    int scoring;
    QString type;
    QString breed;
    QString name;
    QString sex;
    QString age;
    QString social;
    QString condition;
    QString diet;
    QString train;
    QString nocturnal;
    QString emotion;
    QString petWorth;
    QString parental;
    QString allergies;
    QString stability;
    QString res;
};

#endif // ACM_H
