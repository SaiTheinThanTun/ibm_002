/*
 * Human.h
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

#ifndef HUMAN_H_
#define HUMAN_H_


namespace io {

enum Sex {M,F}; //this is outside of namespace, might be troublesome someday

class Human {
	//4. declare nested classes; using forward declaration with pointer below
	class Age;
	class Occupation;
	class Location;
	class Infection;

private:
	Sex sex;
	//Age* age;
	//Occupation* occupation;

public:
	//only here for the debugging process (for now)
	//5. declare pointer to the class
	Age* age;
	Occupation* occupation;
	Location* location;
	Infection* infection;
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
