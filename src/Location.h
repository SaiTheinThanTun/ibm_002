/*
 * Location.h
 *
 *  Created on: Jan 5, 2562 BE
 *      Author: Sai
 */

#ifndef LOCATION_H_
#define LOCATION_H_

#include "Human.h"
#include <iostream>

namespace io {

class Human::Location {
private:
	Human &parent;
	int currentPatch;
	int homePatch;
	int affinityPatches; //should be an array of patches that could be travelled

public:
	Location(Human &t): parent(t), homePatch(0), affinityPatches(0) {
		srand (time(NULL));
		currentPatch=(rand()%parent.patchMax);
	};

	int GetCurrentPatch() const;
	void SetCurrentPatch(int currentPatch);
	void SetHomePatch(int homePatch);
	void SetAffinityPatches(int affinityPatches);

	void Movement(int affinityPatches, int homePatch, int currentPatch); //, int maxSize); //first 3 info can be accessed w/o declaration
};

} /* namespace io */

#endif /* LOCATION_H_ */
