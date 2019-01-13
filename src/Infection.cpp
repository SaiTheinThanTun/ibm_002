/*
 * Infection.cpp
 *
 *  Created on: Jan 5, 2562 BE
 *      Author: Sai
 */

#include "Infection.h"
#include "Location.h"
#include <iostream>

namespace io {

States Human::Infection::GetState() const{
	return state;
}

void Human::Infection::InfectHuman(Patch *patch){
	//random infection
	//if(state==S && (rand()%100)<20) state=I;
	//else if(state==I && (rand()%100)<10) state=R;
	//if 'if else' is not written, events will happen at the same timestep!!!

	if(state==S &&
			(rand()%100)<(patch[parent.location->GetCurrentPatch()].GetInfectivityToHuman()))
		state = I;
	else if (state==I && (rand()%100)<10) state=R; //rno
}

void Human::Infection::Progression(){
//void Infection::Progression(){
	// get age, state, immunity level, etc through friends
	//if(state==I) state = R;
	//std::cout << Patch::GetInfectivityToHuman() << std::endl;

	//std::cout << patch.GetInfectivityToHuman() << std::endl;
	std::cout << "nothing to print here from Infection.h" << std::endl;
	//std::cout << parent.location->GetCurrentPatch() << std::endl;

}

} /* namespace io */
