#include <iostream>
#include <table.h>
#include <string_view>
#include <boost/algorithm/string.hpp>

using namespace econometrics;
void testMsg(std::string_view msg)
{
    std::cout << msg << std::endl;
}


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

void test_opens_table_files(std::string_view description)
{
    testMsg(description);
    std::string data_files_path = "./Text_data_files/";
    Table table(data_files_path + "WAGE1_description.txt", data_files_path + "wage1.txt");

    std::string text = "Let me split this into words";
    std::vector<std::string> results;

    boost::split(results, text, [](char c){return c == ' ';});

    for (auto & result : results)
    {
        std::cout<< result << "\n";
    }
    
}

void test_table()
{

    testMsg("********** Testing Table class ******************");
    test_constructor_throws("---- constructor throws if pahts where table info and description are invalid ---- ");
    test_opens_table_files("--- constructors is able to open files -- ");

}