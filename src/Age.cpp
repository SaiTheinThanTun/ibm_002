/*
 * Age.cpp
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

#include "Age.h"

namespace io {

int Human::Age::GetAge() const {
	return ageInYears;
}

void Human::Age::SetAge(int age) {
	ageInYears = age;
}

void Human::Age::Aging(){
	ageInYears++;
}

} /* namespace io */
