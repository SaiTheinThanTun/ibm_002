/*
 * Occupation.h
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

#ifndef OCCUPATION_H_
#define OCCUPATION_H_

#include"Human.h"

namespace io {

enum OccuType {Non,Student,Farmer,Retired};

class Human::Occupation {
private:
	Human &parent; //recording address of Human object created; to be accessed from within later
	OccuType occuType;
public:
	Occupation(Human &t): parent(t), occuType(Non) {};

	void InitOccupation(); //depending on age
	void SetOccuType(OccuType occuType);
	OccuType GetOccuType();
	void NewOccupation();
	void PrintAgeOccupation();

};

} /* namespace io */

#endif /* OCCUPATION_H_ */
