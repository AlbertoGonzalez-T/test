#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include "../iterator.hpp"

class Op : public Base {
	double operand;
    public:
        Op(double value) : Base() {
			operand = value;	
	}
        virtual double evaluate() { return operand; }
        virtual std::string stringify() { return std::to_string(operand); }
	virtual Iterator* create_iterator(){
		return new NullIterator(this);
	}
	virtual Base* get_left(){
		return nullptr;
	}
	virtual Base* get_right(){
		return nullptr;
	}
	virtual void accept(CountVisitor* visitor){
			visitor->visit_op();
		}
};

#endif //__OP_HPP__
