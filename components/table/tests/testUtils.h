#pragma once
#include <iostream>
#include <string_view>

const std::string DATA_FILES_PATH   = "./Text_data_files/";
const std::string TABLE_DESC        = "WAGE1_description.txt";
const std::string TABLE_CONTENT     = "wage1.txt";

void testMsg(std::string_view msg)
{
    std::cout << msg << std::endl;
}

bool assertTrue(bool condition, std::string_view failureMsg)
{
    if(!condition)
        std::cerr << "[ERROR]: " << failureMsg << std::endl;

    return condition;
}