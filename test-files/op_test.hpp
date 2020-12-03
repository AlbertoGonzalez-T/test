#ifndef OP_TEST_HPP
#define OP_TEST_HPP

#include "gtest/gtest.h"

#include "../header-files/op.hpp"
#include <iostream>
TEST(addPtrTest, get_left){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Add* test = new Add(test1, test2);
        test->create_iterator();
        EXPECT_EQ(test->get_left()->evaluate(), 8);
}

TEST(addPtrTest, get_right){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Add* test = new Add(test1, test2);
        test->create_iterator();
        EXPECT_EQ(test->get_right()->evaluate(), 2);
}

#endif //OPP_TEST_HPP
