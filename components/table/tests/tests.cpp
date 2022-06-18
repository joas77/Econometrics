#define BOOST_TEST_MODULE Table test 
#include <boost/test/included/unit_test.hpp>
#include "test_table.h"

BOOST_AUTO_TEST_CASE(table_test)
{
    testMsg("********** Testing Table class ******************");
    BOOST_TEST(test_constructor_throws("---- constructor throws if pahts where table info and description are invalid ---- "));
    BOOST_TEST(test_gets_rows_size("--- get number of rows -- "));
    BOOST_TEST(test_get_columns_size("--- get number of columns ---"));
}