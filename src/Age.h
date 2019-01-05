/*
 * Age.h
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

#ifndef AGE_H_
#define AGE_H_

#include "Human.h"
#include<iostream>

namespace io {

class Human::Age {

private:
	Human &parent; //recording address of Human object created; to be accessed from within later
	int ageInYears;
public:
	Age(Human &t): parent(t), ageInYears(rand()%100) {}; //initializing age with parent address (address to Human object)
	void SetAge(int age);
	int GetAge() const;
	void Aging();
};

} /* namespace io */

#endif /* AGE_H_ */
