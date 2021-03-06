#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "../header-files/op.hpp"
#include "../header-files/add.hpp"
#include <iostream>

TEST(subPtrTest, get_left){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Sub* test = new Sub(test1, test2);
        test->create_iterator();
        EXPECT_EQ(test->get_left()->evaluate(), 8);
}

TEST(subPtrTest, get_right){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Sub* test = new Sub(test1, test2);
        test->create_iterator();
        EXPECT_EQ(test->get_right()->evaluate(), 2);
}

#endif //SUB_TEST_HPP
