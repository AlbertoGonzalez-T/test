
#ifndef __MULT_H__
#define __MULT_H__

#include "base.h"
#include "../iterator.hpp"
#include "../binary_iterator.cpp"
class Mult : public Base {
	Base* value1;
	Base* value2;
public:
	Mult(Base* v1, Base* v2) : Base() {
		value1 = v1;
		value2 = v2;
	}
	virtual double evaluate() {
		return value1->evaluate() * value2->evaluate();
	}
	virtual std::string stringify() {
		std::string x = std::to_string(value1->evaluate());
		std::string y = std::to_string(value2->evaluate());
		std::string result = x + " / " + y;
		return result;
	}
	virtual Iterator* create_iterator(){
                return new BinaryIterator(this);
        }
        virtual Base* get_left(){
                return value1;
        }
        virtual Base* get_right(){
                return value2;
        }
		virtual void accept(CountVisitor* visitor){
			visitor->visit_mult();
		}

};

#endif //__MULT_H__
