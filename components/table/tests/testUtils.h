#pragma once
#include <iostream>
#include <string_view>

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