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

	//set seed
	srand(2);

	Patch village[patchMax];
	Human humanArray[humanMax];
	ofstream outData;
	outData.open("out.csv");

	Observer observer(humanArray, humanMax, village, patchMax, iterations, &outData);

	//Initialize values
	for(int i=0; i< humanMax; i++){
		humanArray[i].location->SetCurrentPatch(rand()%patchMax);
		if(rand()%5 ==0) humanArray[i].infection->SetState(I);
		else humanArray[i].infection->SetState(S);
	}
	//infection seeds at the patches. or in human as above


	for(int i=0; i< iterations; i++){

		for(int j=0; j< humanMax; j++){
			humanArray[j].Central(village);
			humanArray[j].location->SetCurrentPatch(rand()%patchMax); // this is to simulate movement;
			//there's a separate movement method
		}

		for(int k=0; k<patchMax; k++){
			village[k].Central();
		}

		/*observer.CountingStates();
		observer.WriteOut();
		observer.PushOut();*/
		observer.Central();
	}

	outData.close();

	cout << "no. of S is: " << observer.statesSummary.GetS() << endl;
	cout << "no. of S on 29th item is: " << observer.statesSummaryAll[29].GetS() << endl;

	cout << "Length of the patch array is " << sizeof(village)/sizeof(Patch) << endl;



	return 0;
}
