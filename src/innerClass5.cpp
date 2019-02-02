//============================================================================
// Name        : innerClass5.cpp
// Author      : sai
// Version     : 0.0.5
// Copyright   : Your copyright notice
// Description : IBM
//============================================================================

//load libraries
//original
#include <iostream>
#include <fstream>
//human
#include "Human.h"
#include "Age.h"
#include "Occupation.h"
#include "Location.h"
#include "Infection.h"
//patch
#include "Patch.h"
//observer
#include "Observer.h"
#include "StatesSummary.h"

//graphing
#include "discpp.h"

#include "Debug.h" // functions to debug whats implemented

using namespace std;
using namespace io;



int main() {

	//debug functions
	/*DebugHuman();
	DebugAge();
	DebugOccupation();
	DebugLocation();
	DebugInfection();
	DebugPatch();
	*/

	//initialise properties of arrays
	//int row = 4;
	//int col = 4;
	int row = 25;
		int col = 32;
	int patchMax = row*col;
	int humanMax=1000;
	//int humanMax=32767;
	int iterations=50; //32767; //30;

	//set seed
	srand(2);

	//initialise object instances in arrays
	Patch village[patchMax];
	Human humanArray[humanMax];
	ofstream outData; //for data output as csv file
	outData.open("out.csv");

	//initialise observer object
	Observer observer(humanArray, humanMax, village, patchMax, iterations, &outData);

	//Initialize values within objects
	for(int i=0; i< humanMax; i++){
		humanArray[i].location->SetCurrentPatch(rand()%patchMax); //each human assume random location
		if(rand()%5 ==0) humanArray[i].infection->SetState(I); //assign 20% of human to be of state I
		else humanArray[i].infection->SetState(S); //assign remaining % to be of state S
	}
	//infection seeds can also be in the patches. or in human as above


	for(int i=0; i< iterations; i++){ //time stepping

		for(int j=0; j< humanMax; j++){ //looping through Human array
			humanArray[j].Central(village);
			//Central includes: change Human's state S -> I,
			//if Random no. within 100 is < infectivityToHuman of patch;

			humanArray[j].location->SetCurrentPatch(rand()%patchMax); // this is to simulate Random movement;
			//there's a separate movement method
		}

		vector<StatesSummary> statesSummaryAllPatches; //tmp vector to store StatesSummary in all patches
		//outside of loop for patches

		for(int k=0; k<patchMax; k++){ //looping through patch array
			statesSummaryAllPatches.push_back(village[k].GetStatesSummaryByPatch());

			//cout << village[k].GetTmp() << " ";
			village[k].Central(); //Central includes: StoreHistory, SetInfectivityToHuman, ResetTodayInfectedHuman
			//patch.Central also resets what's stores inside the statesSummary
			//therefore, push to observer has to be done before this
		}

		observer.StoreAllPatchesAllTime(statesSummaryAllPatches);
		//cout << endl;
		/*observer.CountingStates();
		observer.WriteOut();
		observer.PushOut();*/
		observer.Central(); //Central includes: CountingStates, WriteOut, PushOut

	}

	outData.close();


	//checking the output
	cout << "no. of S is: " << observer.statesSummary.GetS() << endl;
	cout << "no. of S on 20th item is: " << observer.statesSummaryAll[20].GetS() << endl;
	cout << "Length of the patch array is " << sizeof(village)/sizeof(Patch) << endl;

	//PatchPlot
	//observer.PatchPlot(S,row,col);
	//observer.PatchPlot(I,row,col);
	//observer.PatchPlot(R,row,col);

	//OverallPlot
	observer.OverallPlot(1,1,1);

	return 0;
}
