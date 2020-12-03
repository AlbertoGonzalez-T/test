#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "../header-files/op.hpp"
#include "../header-files/add.hpp"
#include <iostream>
TEST(addTest, get_Left){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Add* test = new Add(test1, test2);
		test->create_iterator();
        EXPECT_EQ(test->get_left()->evaluate(), 8);
};

TEST(addTest, getRight){
	Op* test1 = new Op(8);
	Op* test2 = new Op(2);
	Add* test = new Add(test1, test2);
	test->create_iterator();
	EXPECT_EQ(test->get_right()->evaluate(), 2);
};

#endif //ADD_TEST_HPP
