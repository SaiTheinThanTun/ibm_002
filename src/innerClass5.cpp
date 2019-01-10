//============================================================================
// Name        : innerClass5.cpp
// Author      : sai
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

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
	int iterations=30;

	Patch village[patchMax];
	Human humanArray[humanMax];
	ofstream outData;
	outData.open("out.csv");

	Observer observer(humanArray, humanMax, village, patchMax, iterations, &outData);

	for(int i=0; i< iterations; i++){

		observer.CountingStates();
		observer.WriteOut();
		observer.PushOut();
	}

	outData.close();

	cout << "no. of S is: " << observer.statesSummary.GetS() << endl;
	cout << "no. of S on 29th item is: " << observer.statesSummaryAll[29].GetS() << endl;

	cout << "Length of the patch array is " << sizeof(village)/sizeof(Patch) << endl;

	Human sai;

	for(int i=0;i<10;i++){
		sai.Test3(village);
	}


	cout << "Infectivity to human in patch 0 is " << village[0].GetInfectivityToHuman() << endl;

	cout << "current patch " << sai.location->GetCurrentPatch() <<endl;



	return 0;
}
