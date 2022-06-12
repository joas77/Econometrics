#include <table.h>
#include <fstream>
#include <iostream>
#include <string>



namespace econometrics
{
    Table::Table(fs::path fileDescription, fs::path fileContent)
    {
        if (!fs::exists(fileDescription) || !fs::exists(fileContent))
        {
            throw fs::filesystem_error("One of next files doesn't exist:",
            fileDescription, fileContent, std::error_code());
        }
       
        parseFileDescription(fileDescription);
    }
    
    Table::~Table(){}

    void Table::parseFileDescription(fs::path fileDescription)
    {
        std::ifstream fDescription(fileDescription);
        std::string line;
        while (fDescription)
        {
            std::getline(fDescription, line);
            if (line.find_first_of(":") != std::string::npos)
            {
                /* found number of rows */
                std::cout << "FOUND\n";
                std::cout << line << std::endl;
            }
            
            std::cout << "NOT_FOUND\n";
        }
    }
} // namespace econometrics
