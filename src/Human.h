/*
 * Human.h
 *
 *  Created on: Jan 4, 2562 BE
 *      Author: Sai
 */

#ifndef HUMAN_H_
#define HUMAN_H_

enum Sex {M,F};

namespace io {

class Human {
	//declare nested classes; using forward declaration with pointer below
	class Age;
	class Occupation;

private:
	Sex sex;
	Age* age;
	Occupation* occupation;

public:
	//Human(): sex(M), age(*this), occupation(*this){};
	Human();
	~Human();
	void Test();
	void Test2();
};

} /* namespace io */

#endif /* HUMAN_H_ */
