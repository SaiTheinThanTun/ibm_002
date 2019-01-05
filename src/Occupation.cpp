/*
 * Occupation.cpp
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

//#include "Human.h"
#include "Occupation.h"
#include "Age.h" // SEE LINE 17. NO REASON THIS SHOULD BE CALLED HERE IN CPP FILE!!!
#include <iostream>

namespace io {

void Human::Occupation::AssignOccupation(){
	//assignment of occupation depending on ageInYears (on another object: age)
	int age = parent.age->GetAge(); // THIS IS BAD PRACTICE!!!!!!!!!!!!!!!!!!!!!!

	if(age<5){occuType=Non;}
	else if(age<18){occuType=Student;}
	else if(age<60){occuType=Farmer;}
	else occuType=Retired;
};

void Human::Occupation::SetOccuType(OccuType occuType){
	this->occuType = occuType;
};

OccuType Human::Occupation::GetOccuType(){
	return occuType;
};


void Human::Occupation::ComingOfAgeNewOccupation(){
	//as age advances, occupation change. just a sample here
	if(parent.age->GetAge()>18 && (occuType==Non || occuType==Student)){
		occuType= Farmer;
	}
};

void Human::Occupation::PrintAgeOccupation(){
	//testing if accessing member function from another object works
	int age = parent.age->GetAge();
	std::cout<<"Age: " << age << " and Occupation: " << occuType << std::endl;
};

} /* namespace io */
