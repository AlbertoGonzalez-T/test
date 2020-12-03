#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "../header-files/op.hpp"
#include "../header-files/add.hpp"
#include <iostream>
TEST(divPtrTest, get_left){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Div* test = new Div(test1, test2);
        test->create_iterator();
        EXPECT_EQ(test->get_left()->evaluate(), 8);
}

TEST(divPtrTest, get_right){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Div* test = new Div(test1, test2);
        test->create_iterator();
        EXPECT_EQ(test->get_right()->evaluate(), 2);
}

#endif //DIV_TEST_HPP
