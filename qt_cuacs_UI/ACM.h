#ifndef ACM_H
#define ACM_H
#include <QString>
#include <QDebug>
#include "AnimalList.h"


class ACM : public Animal, public Client
{
public:
    ACM(QString, QString, QString, QString,
        QString, QString, QString, QString,
        QString, QString, QString, QString,
        QString, QString, QString, QString,
        QString, QString, QString, QString,
        QString, QString, QString, QString,
        QString, QString, QString, QString,
        QString, QString, QString);

    ~ACM();
    int scoringSystem();

protected:
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

    QString id;
    QString name2;
    QString address2;
    QString age2;
    QString social2;
    QString condition2;
    QString diet2;
    QString train2;
    QString nocturnal2;
    QString emotion2;
    QString petWorth2;
    QString parental2;
    QString allergies2;
    QString stability2;
    QString res2;
};

#endif // ACM_H
