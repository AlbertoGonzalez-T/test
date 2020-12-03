#include "gtest/gtest.h"

//#include "test-files/op_test.hpp"
//#include "test-files/mult_test.hpp"
//#include "test-files/div_test.hpp"
//#include "test-files/add_test.hpp"
//#include "test-files/sub_test.hpp"
//#include "test-files/pow_test.hpp"
#include "test-files/visitor_test.hpp"
#include "test-files/iterator_test.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
