/*
 * debug.h
 *
 *  Created on: Jan 5, 2562 BE
 *      Author: Sai
 */


#ifndef DEBUG_H_
#define DEBUG_H_

#include "Human.h"
//#include "Age.h"
//#include "Occupation.h"
#include <iostream>

using namespace std;
using namespace io;

int DebugAge(){
	cout << "Debugging Age" << endl;

	Human myAge;
	myAge.age->SetAge(32);
	myAge.age->Aging();
	if(myAge.age->GetAge() ==33) cout << "Age: okay" << endl;
	else cout << "Age: not okay!!!" << endl;
	return 0;
}

int DebugLocation(){
	cout << "Debugging Location" << endl;

	Human myloc;

	myloc.location->SetCurrentPatch(3);
	cout<< myloc.location->GetCurrentPatch() << endl;
	return 0;
}

int DebugOccupation(){
	cout << "Debugging Occupation" << endl;

	Human myoccu;
	myoccu.occupation->ComingOfAgeNewOccupation();

	cout << myoccu.occupation->GetOccuType() << endl;
	myoccu.occupation->SetOccuType(Farmer);
	cout << myoccu.occupation->GetOccuType() << endl;

	return 0;
}

int DebugHuman(){
	cout << "Debugging Human" << endl;
	Human me;
	me.SetSex(F);
	cout << me.GetSex() << endl;

	int length = 10;
	Human sai[length]; //create array of objects of length

	for(int i=0; i<length; i++){
		sai[i].Test();
	}

	for(int i=0; i<length; i++){
		sai[i].Test2();
	}

	for(int i=0; i<length; i++){
		sai[i].Test();
	}

	return 0;

}

int DebugInfection(){

	cout << "Debugging Infection" << endl;
	Human myInf;
	myInf.infection->InfectHuman();
	cout << myInf.infection->GetState() << endl;
	Patch myPatch;
	myInf.infection->Progression(myPatch);
	//myInf.Progression();
	cout << myInf.infection->GetState() << endl;
	return 0;
}

int DebugPatch(){
	cout << "Debugging Patch: single" << endl;
	Patch myPatch;
	myPatch.SetInfectivityToHuman(90);
	cout << myPatch.GetInfectivityToHuman() << endl;

	cout << "Debugging Patch: multiple" << endl;
	int noPatch =10;
	Patch myPatchA[noPatch];
	for(int i=0; i< noPatch; i++){
		myPatchA[i].SetInfectivityToHuman(rand()%100);
		cout <<"Patch number " << i << " has infectivity of " <<myPatchA[i].GetInfectivityToHuman() << endl;
	}


	return 0;

}



#endif /* DEBUG_H_ */


