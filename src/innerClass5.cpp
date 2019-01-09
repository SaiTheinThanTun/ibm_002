//============================================================================
// Name        : innerClass5.cpp
// Author      : sai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "Human.h"
#include "Age.h"
#include "Occupation.h"
#include "Location.h"
#include "Infection.h"
#include "Patch.h"
#include "InfectivityToPatch.h"

#include "Debug.h"

using namespace std;
using namespace io;



int main() {


	/*DebugHuman();
	DebugAge();
	DebugOccupation();
	DebugLocation();
	DebugInfection();
	DebugPatch();
	*/

	int patchSize = 4*4;
	srand (time(NULL));

	Patch village[patchSize];
	cout << "Length of the patch array is " << sizeof(village)/sizeof(Patch) << endl;

	//Human sai;
	Human sai(village, patchSize);

	for(int i=0;i<10;i++){
		sai.Test3(village);
	}


	cout << "Infectivity to human in patch 0 is " << village[1].GetInfectivityToHuman() << endl;

	cout << "current patch " << sai.location->GetCurrentPatch() <<endl;

	vector<Human> sevenNationArmy(7, Human(village, patchSize)); //Observer will replace village

	for(int i=0; i<7; i++){
		cout << "7 Nation Army location: " << sevenNationArmy[i].location->GetCurrentPatch() << endl;
	}



	return 0;
}
