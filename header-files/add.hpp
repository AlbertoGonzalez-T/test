#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "../header-files/base.hpp"
#include "../iterator.hpp"
#include "../binary_iterator.cpp"

class Add : public Base {
        Base* value1;
		Base* value2;	
      public:
        Add(Base* val1, Base*  val2) : Base() {
                value1 = val1;
				value2 = val2;
 }
        virtual double evaluate() {
        return value1->evaluate() + value2->evaluate();
 }
        virtual std::string stringify() {
		std::string x = std::to_string(value1->evaluate());
		std::string y = std::to_string(value2->evaluate());
		std::string result = x + " + " + y;
		return result;
	}
	virtual Iterator* create_iterator(){
		return new BinaryIterator(this);
	}
	virtual Base* get_left(){
		Op* left = new Op(value1);
		return left;
	}
	virtual Base* get_right(){
		Op* right = new Op(value2);
		return right;
	}
	virtual void accept(CountVisitor* visitor){
		visitor->visit_add();
	}
	
};

#endif //ADD_HPP
