/*
 * Observer.cpp
 *
 *  Created on: Jan 9, 2562 BE
 *      Author: Sai
 */

#include "Observer.h"
#include "Human.h"
#include "Infection.h"

namespace io {

void Observer::CountingStates(){
	//count the states in a given human array
	//set respective numbers to statesSummary object
	int S_=0,I_=0,R_=0; //new declaration for this function only!!!
	for(int i=0; i<humanMax;i++){
		switch(humanArray[i].infection->GetState()){

		case S: S_++; break;
		case I: I_++; break;
		case R: R_++; break;
		}
	}
	statesSummary.SetS(S_);
	statesSummary.SetI(I_);
	statesSummary.SetR(R_);

}

void Observer::PushOut(){
	//push the values to statesSummaryAll array to be stored for all iterations
	//iterations variable was intended for this but simple array could not be initialized with user input value.
	statesSummaryAll.push_back(statesSummary);
}

} /* namespace io */
