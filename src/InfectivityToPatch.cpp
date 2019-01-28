/*
 * InfectivityToPatch.cpp
 *
 *  Created on: Jan 5, 2562 BE
 *      Author: Sai
 */

#include "InfectivityToPatch.h"

namespace io {
void Human::InfectivityToPatch::SetRiskScore(States state, Sex sex, int age, OccuType occuType){};
void Human::InfectivityToPatch::InfectPatch(int riskScore, int patchIndex, Patch* patchArray){
	if(parent.infection->GetState()==I){
		patchArray[parent.location->GetCurrentPatch()].TodayInfectedHuman();
		//this doesn't do anything right now as the main function is not used anywhere
	}

}; //don't actually need riskScore

} /* namespace io */
