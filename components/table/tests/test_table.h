#include <iostream>
#include <table.h>
#include <string_view>
#include "testUtils.h"
#include <boost/algorithm/string.hpp>

using namespace econometrics;

void test_constructor_throws(std::string_view description)
{
    testMsg(description);
    try
    {
        Table table("./invalid_file_path.txt", "./invalid_file_path.txt");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }     
}

void test_gets_rows_size(std::string_view description)
{
    testMsg(description);
    std::string data_files_path = "./Text_data_files/";
    Table table(data_files_path + "WAGE1_description.txt", data_files_path + "wage1.txt");
    assertTrue(table.getRowsSize() == 526, "file should cointains 526 rows");
}

void test_table()
{
    testMsg("********** Testing Table class ******************");
    test_constructor_throws("---- constructor throws if pahts where table info and description are invalid ---- ");
    test_gets_rows_size("--- get number of rows -- ");

}