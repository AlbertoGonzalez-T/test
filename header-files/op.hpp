#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
	Base* self_ptr;
	Iterator* iterator;
    public:
        Op(double value) : Base() {
	 double input = value;	
	}
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return ""; }
	virtual Iterator* create_iterator(){
		this->iterator = new NullIterator(this->self_ptr);		
	}
	virtual Base* get_left(){
		//this->iterator->first();
		return this->iterator->current();	
	}
	virtual Base* get_right(){
		//this->iterator->next();
		return this->iterator->current();
	}
};

#endif //__OP_HPP__
