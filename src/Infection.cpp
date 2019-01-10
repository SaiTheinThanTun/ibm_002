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
	//random infection
	if(state==S && (rand()%100)<20) state=I;
	else if(state==I && (rand()%100)<10) state=R;
	//if 'if else' is not written, events will happen at the same timestep!!!
}

void Human::Infection::Progression(Patch patch){
//void Infection::Progression(){
	// get age, state, immunity level, etc through friends
	//if(state==I) state = R;
	//std::cout << Patch::GetInfectivityToHuman() << std::endl;
	std::cout << patch.GetInfectivityToHuman() << std::endl;

}

} /* namespace io */
