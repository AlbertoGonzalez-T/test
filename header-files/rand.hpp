#ifndef RAND_HPP
#define RAND_HPP

#include "base.hpp"
#include "../iterator.hpp"

class Rand : public Base {
        double v;
         public:
        Rand() : Base() {
        v = rand() % 100;
 }
        virtual double evaluate() {
        return v;
 }
        virtual std::string stringify() { return std::to_string(v); }
        virtual void accept(CountVisitor* visitor){
			visitor->visit_rand(self_ptr);
		}
       virtual Iterator* create_iterator(){
		return new NullIterator(this);	
	}
	virtual Base* get_left(){
		return nullptr;
	}
	virtual Base* get_right(){
		return nullptr;
	}
};

#endif //RAND_HPP
