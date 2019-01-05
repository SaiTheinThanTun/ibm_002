/*
 * Location.cpp
 *
 *  Created on: Jan 5, 2562 BE
 *      Author: Sai
 */
#include "Human.h"
#include "Location.h"
#include <iostream>

namespace io {

/*Human::Location::Location(Human &t) : parent(t){
	//parent = t;
	currentPatch = 0;
	homePatch = 0;
	affinityPatches = 0;

}*/

int Human::Location::GetCurrentPatch() const{
	return currentPatch;
}

void Human::Location::SetCurrentPatch(int currentPatch){
	this->currentPatch = currentPatch;

}
	void Human::Location::SetHomePatch(int homePatch){
		this->homePatch = homePatch;
	}

	void Human::Location::SetAffinityPatches(int affinityPatches){
		this->affinityPatches = affinityPatches;
	}

void Human::Location::Movement(int affinityPatches, int homePatch, int currentPatch){ //, int maxSize){
	currentPatch = rand()%100; //%maxSize; //random movement
}

} /* namespace io */
