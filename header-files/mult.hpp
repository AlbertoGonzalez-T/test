
#ifndef __MULT_H__
#define __MULT_H__

#include "base.h"

class Mult : public Base {
	double value1;
	double value2;
public:
	Mult(Base* v1, Base* v2) : Base() {
		value1 = v1->evaluate();
		value2 = v2->evaluate();
	}
	virtual double evaluate() {
		return value1 * value2;
	}
	virtual std::string stringify() {
		std::string x = std::to_string(value1);
		std::string y = std::to_string(value2);
		std::string result = x + " / " + y;
		return result;
	}
};

#endif //__MULT_H__
