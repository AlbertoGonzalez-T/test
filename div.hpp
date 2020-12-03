#ifndef DIV_HPP
#define DIV_HPP

#include "base.hpp"

class Div : public Base {
	double value1;
	double value2;
      public:
        Div(Base* val1, Base*  val2) : Base() {
		value1 = val1->evaluate();
		value2 = val2->evaluate();
 }
        virtual double evaluate() {
        return value1 / value2;
 }
        virtual std::string stringify() {
		std::string x = std::to_string(value1);
		std::string y = std::to_string(value2);
		std::string result = x + " / " + y;
		return result;
	}
};

#endif //DIV_HPP
