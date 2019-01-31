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

void Human::Infection::SetState(States state) {
	this->state = state;
}

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
	else if (state==I && (rand()%100)<10) state=R; //rno // this is also Progression() stuff
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

void Human::Infection::InfectPatch(int riskScore, Patch* patchArray){
	if(parent.infection->GetState()==I){
		patchArray[parent.location->GetCurrentPatch()].TodayInfectedHuman();
		//this doesn't do anything right now as the main function is not used anywhere
	}

};

void Human::Infection::SendingStates(Patch* patchArray){
	//send the state of the individual at current timestep to the patch they are on
	switch(parent.infection->GetState()){
	case S: patchArray[parent.location->GetCurrentPatch()].IncrementS(); break;
	case I: patchArray[parent.location->GetCurrentPatch()].IncrementI(); break;
	case R: patchArray[parent.location->GetCurrentPatch()].IncrementR(); break;
	}
}

} /* namespace io */
