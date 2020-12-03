#ifndef __VISITOR_TEST_HPP__
#define __VISITOR_TEST_HPP__

#include "gtest/gtest.h"

#include "../visitor.hpp"
#include "../header-files/add.hpp"
#include "../header-files/sub.hpp"
#include "../header-files/base.hpp"
#include "../header-files/op.hpp"
#include "../header-files/pow.hpp"
#include "../header-files/rand.hpp"
#include "../header-files/mult.hpp"
#include "../header-files/div.hpp"
#include <iostream>

TEST(IteratorTest, PowBinaryTest){
    Base* test1 = new Op(3);
    Base* test2 = new Op(7);
    Pow* temp = new Pow(test1, test2);
    Base* dummy = new add(temp, num2);

    Iterator* it = dummy->create_iterator();
    PreorderIterator iter = new PreorderIterator(dummy);
    CountVisitor *visit = new CountVisitor();
    it->first();
    while(!it->isdone()){
        Base* x = it->current();
        x->accept(visit);
        it->next();
    }
    EXPECT_EQ(visit->op_count(), 2);
    EXPECT_EQ(visit->pow_count(), 1);
    EXPECT_EQ(visit->add_count(), 0);
}

TEST(IteratorTest, PreOrderTest){
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
    EXPECT_EQ(counter->add_count(), 1);
}

#endif //VISITOR_TEST_HPP
