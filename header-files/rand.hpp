#ifndef RAND_HPP
#define RAND_HPP

#include "base.hpp"

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
};

#endif //RAND_HPP
