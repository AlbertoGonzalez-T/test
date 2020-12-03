#ifndef POW_HPP
#define POW_HPP

#include "base.hpp"
#include "math.h"

class Pow : public Base {
        double value1;
        double value2;
	Iterator* iterator;
	Base* self_ptr;
      public: 
        Pow(Base* val1, Base*  val2) : Base() {
                value1 = val1->evaluate();
                value2 = val2->evaluate();
 }
        virtual double evaluate() {
        return pow(value1, value2);
 }  
        virtual std::string stringify() {
                std::string x = std::to_string(value1);
                std::string y = std::to_string(value2);
                std::string result = x + " ** " + y;
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

#endif //POW_HPP
