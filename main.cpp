#include<iostream>
#include "iterator.hpp"
#include "visitor.hpp"
#include "header-files/add.hpp"
#include "header-files/sub.hpp"
#include "header-files/base.hpp"
#include "header-files/op.hpp"
#include "header-files/pow.hpp"
#include "header-files/rand.hpp"
#include "header-files/mult.hpp"
#include "header-files/div.hpp"

class Base;

int main(){
    Op* op1 = new op(1);
    Op* op2 = new op(2);
    Base* root = new Add(op1, op2);

    CountVisitor* counter = new CountVisitor();
    PreorderIterator iter = new PreOrderIterator(root);

    iter.first();
    while(!iter.is_done()){
        iter.current().accept(counter);
        iter.next();
    }
    root->accept(counter)
    counter->add_count();  
}