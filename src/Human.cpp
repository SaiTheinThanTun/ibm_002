/*
 * Human.cpp
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

#include "Human.h"
#include "Age.h"
#include "Occupation.h"

namespace io {

Human::Human(){
	sex = M;
	age= new Age(*this);
	occupation = new Occupation(*this);
}

Human::~Human(){
	delete age;
	delete occupation;
}

} /* namespace io */
