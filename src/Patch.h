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
	int historyInfectedHuman;
	int infectivityToHuman;
	int mosquitoAbundance;
public:
	Patch();
	void StoreHistory();
	void SetInfectivityToHuman(int infectivityToHuman);
	int GetInfectivityToHuman();
};

} /* namespace io */

#endif /* PATCH_H_ */
