/*
 * Infection.cpp
 *
 *  Created on: Jan 5, 2562 BE
 *      Author: Sai
 */

#include "Infection.h"
#include <iostream>

namespace io {

States Human::Infection::GetState() const{
	return state;
}

void Human::Infection::InfectHuman(){
	if(state==S) state=I;
}

void Human::Infection::Progression(Patch* patch){
//void Infection::Progression(){
	// get age, state, immunity level, etc through friends
	//if(state==I) state = R;
	//std::cout << Patch::GetInfectivityToHuman() << std::endl;
	std::cout << patch->GetInfectivityToHuman() << std::endl;

}

} /* namespace io */
