/*
 * Patch.cpp
 *
 *  Created on: Jan 5, 2562 BE
 *      Author: Sai
 */

#include "Patch.h"

namespace io {

Patch::Patch() {
	patchIndex = 0;
	historyInfectedHuman = 0;
	infectivityToHuman = 0;
	mosquitoAbundance = 0;

}

void Patch::StoreHistory(){
	historyInfectedHuman++;
	SetInfectivityToHuman(historyInfectedHuman);
}

void Patch::SetInfectivityToHuman(int infectivityToHuman){
	this->infectivityToHuman = infectivityToHuman;
}

int Patch::GetInfectivityToHuman(){
	return infectivityToHuman;
}

} /* namespace io */
