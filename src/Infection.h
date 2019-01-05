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
	States GetState() const;
	void InfectHuman();
	void Progression(Patch patch); // get age, state, immunity level, etc through friends
	//void Progression();
};

} /* namespace io */

#endif /* INFECTION_H_ */
