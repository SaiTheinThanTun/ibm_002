/*
 * Human.cpp
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

//When adding new nested class, follow the numbers
//1. add header file
#include "Human.h"
#include "Age.h"
#include "Occupation.h"
#include "Location.h"
#include "Infection.h"
#include "InfectivityToPatch.h"

namespace io {

Human::Human(){
	//2. default initialization
	sex = M;
	age= new Age(*this);
	occupation = new Occupation(*this);
	location = new Location(*this);
	infection = new Infection(*this);
	infectivityToPatch = new InfectivityToPatch(*this);
}

Human::~Human(){
	//3. destruction of allocated memory
	delete age;
	delete occupation;
	delete location;
	delete infection;
	delete infectivityToPatch;
}

void Human::SetSex(Sex sex){
	this->sex = sex;
}

Sex Human::GetSex(){
	return sex;
}

void Human::Test(){
	//testing of functions from objects go here
	occupation->PrintAgeOccupation();
}

void Human::Test2(){
	occupation->AssignOccupation();
}

} /* namespace io */
