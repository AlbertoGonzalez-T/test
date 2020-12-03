#ifndef POW_TEST_HPP
#define POW_TEST_HPP

#include "gtest/gtest.h"

#include "../header-files/op.hpp"
#include "../header-files/pow.hpp"
#include <iostream>
using namespace std;
TEST(powPtrTest, get_left){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Pow* test = new Pow(test1, test2);
        cout << "creating iterator.." << endl;
        test->create_iterator();
        cout << "iterator created successfully" << endl;
        cout << "running google test" << endl;
        EXPECT_EQ(test->get_left()->evaluate(), 8);
}

TEST(powPtrTest, get_right){
        Op* test1 = new Op(8);
        Op* test2 = new Op(2);
        Pow* test = new Pow(test1, test2);
        test->create_iterator();
        EXPECT_EQ(test->get_right()->evaluate(), 2);
}

#endif //POW_TEST_HPP
