/*
 * Patch.cpp
 *
 *  Created on: Jan 5, 2562 BE
 *      Author: Sai
 */

#include <numeric>

#include "Patch.h"


namespace io {

Patch::Patch(): historyInfectedHuman {0,0,0,0,0,0,0} {
	patchIndex = 0;
	todayInfectedHuman = 0;
	//historyInfectedHuman = {0,0,0,0,0,0,0};
	infectivityToHuman = 0;
	mosquitoAbundance = 0;

}

void Patch::TodayInfectedHuman(){
	todayInfectedHuman++;
	//loop for all humans

	//SetInfectivityToHuman(todayInfectedHuman); // don't actually need this
}

void Patch::StoreHistory(){
	//after looping through all human; after infectivityToHuman has been set, therefore 1day delay
	//loop for each timestep
	//stores 7-day history of how many humans have infected the patch
	//infectivity increases with increase in the numbers of 7 day history, may plateau

	historyInfectedHuman[6] = historyInfectedHuman[5];
	historyInfectedHuman[5] = historyInfectedHuman[4];
	historyInfectedHuman[4] = historyInfectedHuman[3];
	historyInfectedHuman[3] = historyInfectedHuman[2];
	historyInfectedHuman[2] = historyInfectedHuman[1];
	historyInfectedHuman[1] = historyInfectedHuman[0];
	historyInfectedHuman[0] = todayInfectedHuman;
}

void Patch::SetInfectivityToHuman(){
	//this->infectivityToHuman = infectivityToHuman;
	int historyTotal= std::accumulate(historyInfectedHuman,historyInfectedHuman+6,0);

	if(historyTotal <10) infectivityToHuman= 5;
	else if(historyTotal <20) infectivityToHuman =10;
	else if(historyTotal <30) infectivityToHuman =20;
	else infectivityToHuman=25;

}

int Patch::GetInfectivityToHuman(){
	return infectivityToHuman;
}

} /* namespace io */
