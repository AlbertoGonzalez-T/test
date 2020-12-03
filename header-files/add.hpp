#ifndef ADD_HPP
#define ADD_HPP

#include "base.hpp"
#include "../iterator.hpp"
#include "../binary_iterator.cpp"

class Add : public Base {
        double value1;
        double value2;
	Iterator* iterator;
	Base* self_ptr;		
      public:
        Add(Base* val1, Base*  val2) : Base() {
                value1 = val1->evaluate();
                value2 = val2->evaluate();
 }
        virtual double evaluate() {
        return value1 + value2;
 }
        virtual std::string stringify() {
		std::string x = std::to_string(value1);
		std::string y = std::to_string(value2);
		std::string result = x + " + " + y;
		return result;
	}
	virtual Iterator* create_iterator(){
		this->iterator = new BinaryIterator(this->self_ptr);
		return this->iterator;		
	}
	virtual Base* get_left(){
		Op* left = new Op(value1);
		return left;
	}
	virtual Base* get_right(){
		Op* right = new Op(value2);
		return right;
	}
	
};

#endif //ADD_HPP
