/*
 * Occupation.cpp
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

//#include "Human.h"
#include "Occupation.h"
#include "Age.h"
#include <iostream>

namespace io {

void Human::Occupation::AssignOccupation(){
	int age = parent.age->GetAge();

	if(age<5){occuType=Non;}
	else if(age<18){occuType=Student;}
	else if(age<60){occuType=Farmer;}
	else occuType=Retired;
};

OccuType Human::Occupation::GetOccuType(){
	return occuType;
};

void Human::Occupation::PrintAgeOccupation(){
	int age = parent.age->GetAge();
	std::cout<<"Age: " << age << " and Occupation: " << occuType << std::endl;
};

} /* namespace io */
