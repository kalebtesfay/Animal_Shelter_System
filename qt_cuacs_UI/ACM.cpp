#include "ACM.h"

ACM::ACM(QString type, QString breed, QString name, QString sex,
         QString age, QString social, QString condition, QString diet,
         QString train, QString nocturnal, QString emotion,
         QString petWorth, QString parental, QString allergies,
         QString stability, QString res) : Animal(type, breed, name,
                                                  sex, age, social, condition, diet, train, nocturnal,
                                                  emotion, petWorth, parental, allergies, stability, res){}

ACM::~ACM(){}

int ACM::scoringSystem(){

}
