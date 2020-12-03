#ifndef MULT_TEST_HPP
#define MULT_TEST_HPP

#include "gtest/gtest.h"

#include "../header-files/op.hpp"
#include "../header-files/mult.hpp"
#include <iostream>
TEST(multPtrTest, get_left){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Mult* test = new Mult(test1, test2);
        test->create_iterator();
        EXPECT_EQ(test->get_left()->evaluate(), 8);
}

TEST(multPtrTest, get_right){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Mult* test = new Mult(test1, test2);
        test->create_iterator();
        EXPECT_EQ(test->get_right()->evaluate(), 2);
}

#endif //MULT_TEST_HPP
