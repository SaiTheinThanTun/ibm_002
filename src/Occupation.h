/*
 * Occupation.h
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

#ifndef OCCUPATION_H_
#define OCCUPATION_H_

#include"Human.h"

enum OccuType {Non,Student,Farmer,Retired};

namespace io {

class Human::Occupation {
private:
	Human &parent;
	OccuType occuType;
public:
	Occupation(Human &t): parent(t), occuType(Non) {};
	void AssignOccupation();
	OccuType GetOccuType();
	void PrintAgeOccupation();

};

} /* namespace io */

#endif /* OCCUPATION_H_ */
