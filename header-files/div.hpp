#ifndef DIV_HPP
#define DIV_HPP

#include "base.hpp"
#include "../iterator.hpp"
#include "../binary_iterator.cpp"

class Div : public Base {
	Base* value1;
	Base* value2;
      public:
        Div(Base* val1, Base*  val2) : Base() {
		value1 = val1;
                value2 = val2;
 }
        virtual double evaluate() {
        return value1->evaluate() / value2->evaluate();
 }
        virtual std::string stringify() {
		std::string x = std::to_string(value1);
		std::string y = std::to_string(value2);
		std::string result = x + " / " + y;
		return result;
	}
	virtual Iterator* create_iterator(){
                return new BinaryIterator(this);
        }
        virtual Base* get_left(){
                return this->iterator->current();
        }
        virtual Base* get_right(){
                return this->iterator->current();
        }
        virtual void accept(CountVisitor* visitor){
                visitor->visit_div();
        }


};

#endif //DIV_HPP
