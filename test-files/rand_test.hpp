#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "../header-files/op.hpp"
#include "../header-files/add.hpp"
#include <iostream>
TEST(randPtrTest, get_left){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Rand* test = new Rand(test1, test2);
        test->create_iterator();
        EXPECT_EQ(test->get_left()->evaluate(), 8);
}

TEST(randPtrTest, get_right){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Rand* test = new Rand(test1, test2);
        test->create_iterator();
        EXPECT_EQ(test->get_right()->evaluate(), 2);
}

#endif //RAND_TEST_HPP
