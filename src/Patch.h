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
public:
	Patch();
	//const int LENGTH;
	void TodayInfectedHuman();
	void ResetTodayInfectedHuman(){todayInfectedHuman=0;};
	void StoreHistory();
	void SetInfectivityToHuman();
	int GetInfectivityToHuman();
};

} /* namespace io */

#endif /* PATCH_H_ */
