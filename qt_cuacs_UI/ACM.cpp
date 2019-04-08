#include <iostream>
#include <iomanip>
#include <QString>
using namespace std;

#include "ACM.h"

ACM::ACM(QString type, QString breed, QString name, QString sex,
         QString age, QString social, QString condition, QString diet,
         QString train, QString nocturnal, QString emotion,
         QString petWorth, QString parental, QString allergies,
         QString stability, QString res,QString id, QString name2, QString address2, QString age2,
         QString social2, QString condition2, QString diet2, QString train2,
         QString nocturnal2, QString emotion2, QString petWorth2, QString parental2,
         QString allergies2, QString stability2, QString res2) : Animal(type, breed, name,
                                                  sex, age, social, condition,
                                                  diet, train, nocturnal, emotion,
                                                  petWorth, parental, allergies, stability,
                                                  res), Client(id, name2, address2, age2,
                                                               social2, condition2, diet2, train2,
                                                               nocturnal2, emotion2, petWorth2, parental2,
                                                               allergies2, stability2, res2){}

ACM::~ACM(){}

int ACM::scoringSystem(){

}
