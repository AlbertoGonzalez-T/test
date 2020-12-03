
#ifndef __MULT_H__
#define __MULT_H__

#include "base.h"

class Mult : public Base {
	double value1;
	double value2;
	Iterator* iterator;
	Base* self_ptr;
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
	virtual Iterator* create_iterator(){
                this->iterator = new BinaryIterator(this->self_ptr);
                return this->iterator;
        }
        virtual Base* get_left(){
                return this->iterator->current();
        }
        virtual Base* get_right(){
                return this->iterator->current();
        }

};

#endif //__MULT_H__
