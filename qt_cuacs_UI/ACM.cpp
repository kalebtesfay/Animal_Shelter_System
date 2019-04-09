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



 //all clients
// QSqlQuery client_query;
// client_query.exec("SELECT id”);


////add all client objects to a list from SQL
//while (client_query.next()) {
//	//construct object
//	constructor() {
//       	 QString name = query.value(0).toString();
//      	  int salary = query.value(1).toInt();
//	}

//	list<client> client_object_list;

//	client item;
//	client_object_list.push_back(item);

//}
//“same thing for animals ”
//animal_object_list

//for all client_object_list [ i ] {

//	//filterstage1 for age
//	for all animal_object_list [ j ] {
//		if ( client_object_list[i].age == x ) &&
//	((animal_object_list[ j ].age == x+1) || (animal_object_list[ j ].age == x-1 ) ||  (animal_object_list[ j ].age == x )

//	valid_animals_objects += animal_object_list[ j ]

////filterstage2 for social
//	for all valid_animals_objects [ j ] {
//		if ( client_object_list[i].social == x ) &&
//	((animal_object_list[ j ].social == x+1) || (valid_animals_objects[ j ].social == x-1 ) ||  (valid_animals_objects[ j ].social == x )

//	valid_animals_objects_filter2 += valid_animals_objects[ j ];
//        }


}
