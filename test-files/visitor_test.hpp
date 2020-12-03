#ifndef VISITOR_TEST_HPP
#define VISITOR_TEST_HPP

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

#endif //VISITOR_TEST_HPP
