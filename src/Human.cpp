/*
 * Human.cpp
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

#include "Human.h"
#include "Age.h"
#include "Occupation.h"
#include "Location.h"

namespace io {

Human::Human(){
	//default initialization
	sex = M;
	age= new Age(*this);
	occupation = new Occupation(*this);
	location = new Location(*this);
}

Human::~Human(){
	//destruction of allocated memory
	delete age;
	delete occupation;
	delete location;
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
