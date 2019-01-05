/*
 * Human.h
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

#ifndef HUMAN_H_
#define HUMAN_H_

enum Sex {M,F}; //this is outside of namespace, might be troublesome someday

namespace io {

class Human {
	//declare nested classes; using forward declaration with pointer below
	class Age;
	class Occupation;
	class Location;

private:
	Sex sex;
	//Age* age;
	//Occupation* occupation;

public:
	//only here for the debugging process (for now)
	Age* age;
	Occupation* occupation;
	Location* location;
	//Human(): sex(M), age(*this), occupation(*this){};
	Human();
	~Human();
	void SetSex(Sex sex);
	Sex GetSex();
	void Test();
	void Test2();
};

} /* namespace io */

#endif /* HUMAN_H_ */
