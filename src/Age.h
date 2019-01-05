/*
 * Age.h
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

#ifndef AGE_H_
#define AGE_H_

//9. don't forget the header for mother's class
#include "Human.h"
#include<iostream>

namespace io {

//6. declare the nested class as nested class
class Human::Age {
//friend class Human;
private:
	//7. declare address to store mother object's address
	Human &parent; //recording address of Human object created; to be accessed from within later
	int ageInYears;
public:
	//8. initialize the class by passing address of the mother's object
	Age(Human &t): parent(t), ageInYears(rand()%100) {}; //initializing age with parent address (address to Human object)
	void SetAge(int age);
	int GetAge() const;
	void Aging();
};

} /* namespace io */

#endif /* AGE_H_ */
