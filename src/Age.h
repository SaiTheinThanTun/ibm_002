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
	Human &parent;
	int ageInYears;
public:
	Age(Human &t): parent(t), ageInYears(rand()%100) {};
	int GetAge();
};

} /* namespace io */

#endif /* AGE_H_ */
