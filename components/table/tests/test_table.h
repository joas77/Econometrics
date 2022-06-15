#include <iostream>
#include <table.h>
#include <string_view>
#include "testUtils.h"

using namespace econometrics;

bool test_constructor_throws(std::string_view description)
{
    testMsg(description);
    bool testResult = false;
    try
    {
        Table table("./invalid_file_path.txt", "./invalid_file_path.txt");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        testResult = true;
    }

    return testResult;    
}

bool test_gets_rows_size(std::string_view description)
{
    testMsg(description);
    std::string data_files_path = "./Text_data_files/";
    Table table(data_files_path + "WAGE1_description.txt", data_files_path + "wage1.txt");
    return assertTrue(table.getRowsSize() == 526, "file should cointains 526 rows");
}

bool test_get_columns_size(std::string_view desc)
{
    testMsg(desc);
    std::string data_files_path = "./Text_data_files/";
    Table table(data_files_path + "WAGE1_description.txt", data_files_path + "wage1.txt");
    return assertTrue(table.getColumnsSize() == 24, "file should cointains 24 columns");
}