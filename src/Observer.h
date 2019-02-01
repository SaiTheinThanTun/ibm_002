/*
 * Observer.h
 *
 *  Created on: Jan 9, 2562 BE
 *      Author: Sai
 */

#ifndef OBSERVER_H_
#define OBSERVER_H_

#include <iostream>
#include <fstream>
#include <vector>

#include "Human.h"
#include "StatesSummary.h"
#include "Patch.h"
#include "Infection.h" // for States enum

namespace io {

class Observer {
private:
	Human* humanArray;
	int humanMax;
	Patch* patchArray;
	int patchMax;
	int iterations;
	std::ofstream* outData;

	std::vector< std::vector <StatesSummary> > statesSummaryAllPatchesAllTime;

public:
	StatesSummary statesSummary;
	//StatesSummary statesSummaryAll[iterations];
	std::vector<StatesSummary> statesSummaryAll; //(int size=iterations, StatesSummary);

	Observer(Human* humanArray, int humanMax, Patch* patchArray, int patchMax, int iterations, std::ofstream* outData){
		this->humanArray=humanArray;
		this->humanMax=humanMax;
		this->patchArray=patchArray;
		this->patchMax=patchMax;
		this->iterations=iterations;
		this->outData=outData;
	};

	void CountingStates();
	//count the states in a given human array
	//set respective numbers to statesSummary object

	void WriteOut(){statesSummary.WriteOut(*outData);};
	//nested function WriteOut is invoked here to keep statesSummary encapsulated

	void PushOut();
	//push the values to statesSummaryAll array to be stored for all iterations
	//iterations variable was intended for this but simple array could not be initialized with user input value

	void StoreAllPatchesAllTime(std::vector<StatesSummary> t){
		statesSummaryAllPatchesAllTime.push_back(t);
	}

	int GetSxy(int x, int y){
		return statesSummaryAllPatchesAllTime[x][y].GetS();
	}

	int GetIxy(int x, int y){
			return statesSummaryAllPatchesAllTime[x][y].GetI();
		}

	int GetRxy(int x, int y){
			return statesSummaryAllPatchesAllTime[x][y].GetR();
		}

	void Central(){
		//Control center of the Observer object/class;
		CountingStates();
		WriteOut();
		PushOut();
	};

	void PatchPlot(States State, int row, int col);


};

} /* namespace io */

#endif /* OBSERVER_H_ */
