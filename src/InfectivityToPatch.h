/*
 * InfectivityToPatch.h
 *
 *  Created on: Jan 5, 2562 BE
 *      Author: Sai
 */

#ifndef INFECTIVITYTOPATCH_H_
#define INFECTIVITYTOPATCH_H_

#include "Human.h"
#include "Age.h"
#include "Infection.h"
#include "Occupation.h"

namespace io {

class Human::InfectivityToPatch {
private:
	Human &parent;
	int riskScore;
public:
	InfectivityToPatch(Human &t): parent(t), riskScore(0){};
	void SetRiskScore(States state, Sex sex, int age, OccuType occuType);
	void InfectPatch(int riskScore, int patchIndex, Patch* patchArray); //don't actually need riskScore
};

} /* namespace io */

#endif /* INFECTIVITYTOPATCH_H_ */
