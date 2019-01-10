//============================================================================
// Name        : innerClass5.cpp
// Author      : sai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Human.h"
#include "Age.h"
#include "Occupation.h"
#include "Location.h"
#include "Infection.h"
#include "InfectivityToPatch.h"

#include "Patch.h"

#include "Observer.h"
#include "StatesSummary.h"

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

	int patchMax = 4*4;
	int humanMax=100;
	int iterations=100;

	Patch village[patchMax];
	Human humanArray[humanMax];
	string writeDestination = "out.csv";



	cout << "Length of the patch array is " << sizeof(village)/sizeof(Patch) << endl;

	Human sai;

	for(int i=0;i<10;i++){
		sai.Test3(village);
	}


	cout << "Infectivity to human in patch 0 is " << village[0].GetInfectivityToHuman() << endl;

	cout << "current patch " << sai.location->GetCurrentPatch() <<endl;



	return 0;
}
