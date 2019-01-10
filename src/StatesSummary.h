/*
 * StatesSummary.h
 *
 *  Created on: Jan 9, 2562 BE
 *      Author: Sai
 */

#ifndef STATESSUMMARY_H_
#define STATESSUMMARY_H_

#include <iostream>
#include <fstream>

namespace io {

class StatesSummary{
private:
//	States state;
	//everything here is contingent upon the enum States;
	//class to hold the summary data summarized from human array each time step

	int S_, I_, R_;

public:
	StatesSummary(){S_=0; I_=0; R_=0;};
	void SetS(int S){
		this->S_ =S;
	};
	void SetI(int I){
			this->I_ =I;
		};
	void SetR(int R){
			this->R_ =R;
		};
	int GetS(){
		return S_;
	};
	int GetI(){
			return I_;
		};
	int GetR(){
			return R_;
		};

	//2nd elegant way
	void WriteOut(std::ofstream& outData){
		outData << GetS() << ", " << GetI() << ", " << GetR() << std::endl;
	};
};

} /* namespace io */

#endif /* STATESSUMMARY_H_ */
