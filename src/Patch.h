/*
 * Patch.h
 *
 *  Created on: Jan 5, 2562 BE
 *      Author: Sai
 */

#ifndef PATCH_H_
#define PATCH_H_

namespace io {

class Patch {
private:
	int patchIndex;
	int todayInfectedHuman;
	int historyInfectedHuman[7];
	int infectivityToHuman;
	int mosquitoAbundance;

	//int tmp;
public:
	Patch();
	//const int LENGTH;
	void TodayInfectedHuman();
	void ResetTodayInfectedHuman(){todayInfectedHuman=0;};
	//int GetTodayInfectedHuman(){return todayInfectedHuman;}; //delete after testing
	void StoreHistory();
	void SetInfectivityToHuman();
	int GetInfectivityToHuman();
	void Central();

	//int GetTmp() {return tmp;};
};

} /* namespace io */

#endif /* PATCH_H_ */
