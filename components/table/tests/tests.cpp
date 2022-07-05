#define BOOST_TEST_MODULE Table test 
#include <boost/test/included/unit_test.hpp>
#include "test_table.h"
#include "test_table_contents.h"

BOOST_AUTO_TEST_SUITE(econometrics_table)

BOOST_AUTO_TEST_CASE(table_test_header)
{
    testMsg("********** Testing Table class ******************");
    BOOST_TEST(test_constructor_throws("---- constructor throws if pahts where table info and description are invalid ---- "));
    BOOST_TEST(test_gets_rows_size("--- get number of rows -- "));
    BOOST_TEST(test_get_columns_size("--- get number of columns ---"));
}

BOOST_AUTO_TEST_CASE(table_test_content)
{
    testMsg("********** Testing Table content ******************");
    BOOST_TEST(test_get_cell_value("--- get cell value ---"));
}

BOOST_AUTO_TEST_SUITE_END()