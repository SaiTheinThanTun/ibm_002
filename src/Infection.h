/*
 * Infection.h
 *
 *  Created on: Jan 5, 2562 BE
 *      Author: Sai
 */

#ifndef INFECTION_H_
#define INFECTION_H_

#include "Human.h"
#include "Patch.h"

namespace io {

enum States{S,I,R};

class Human::Infection {

private:
	Human &parent;
	States state;

public:
	Infection(Human &t): parent(t), state(S) {};
	void SetState(States state);
	States GetState() const;
	void InfectHuman(Patch *patch);
	void Progression(); // get age, state, immunity level, etc through friends
	//void Progression();
	void InfectPatch(int riskScore, int patchIndex, Patch* patchArray);
};

} /* namespace io */

#endif /* INFECTION_H_ */
