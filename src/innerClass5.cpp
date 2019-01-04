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
using namespace std;
using namespace io;

int main() {

	int length = 10;
	Human sai[length];

	for(int i=0; i<length; i++){
		sai[i].occupation->PrintAgeOccupation();
	}

	for(int i=0; i<length; i++){
			sai[i].occupation->AssignOccupation();
		}

	for(int i=0; i<length; i++){
			sai[i].occupation->PrintAgeOccupation();
		}

	return 0;
}
