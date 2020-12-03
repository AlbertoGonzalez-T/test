#ifndef POW_HPP
#define POW_HPP

#include "base.hpp"
#include "math.h"
#include "../binary_iterator.cpp"
#include "../iterator.hpp"

class Pow : public Base {
        Base* value1;
        Base* value2;
	Iterator* iterator;
	Base* self_ptr;
      public: 
        Pow(Base* val1, Base*  val2) : Base() {
                value1 = val1
                value2 = val2
 }
        virtual double evaluate() {
        return pow(value1->evaluate(), value2->evaluate());
 }  
        virtual std::string stringify() {
                std::string x = std::to_string(value1->evaluate());
                std::string y = std::to_string(value2->evaluate());
                std::string result = x + " ** " + y;
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
			visitor->visit_pow();
		}

};

#endif //POW_HPP
