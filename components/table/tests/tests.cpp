// #include <iostream>
// #include "test_table.h"

// int main()
// {
//     std::cout << "Running tests..." << std::endl;
//     test_table();
   
//     return 0;
// }
#define BOOST_TEST_MODULE My Test 
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(first_test)
{
  int i = 1;
  BOOST_TEST(i);
  BOOST_TEST(i == 1);
}