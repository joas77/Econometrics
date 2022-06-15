#include <table.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>


namespace econometrics
{

    bool operator<(const Title& lhs, const Title& rhs)
    {
        return lhs.id < rhs.id;
    }

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
            if (line.find(':') != std::string::npos)
            {
                mRows = parseRows(line);
            }
            
            if (line.find('.') != std::string::npos)
            {
                /* code */
                std::vector<std::string> results;
                boost::split(results, line, [](char c){ return c == '.';});

                for (auto &r : results)
                {
                    
                    std::cout << r << std::endl;
                }

                Title t;
                t.id = std::stoi(results.at(0));

                tableColumns[t]=std::vector<std::string>();

                
                
            }
            
        }

    }

    int Table::parseRows(std::string_view line)
    {
        std::vector<std::string> results;
        boost::split(results, line, [](char c){ return c == ':'; });
        boost::trim(results.at(1));
        return std::stoi(results.at(1));
    }

    int Table::getRowsSize()
    {
        return mRows;
    }

    int Table::getColumnsSize()
    {
        return tableColumns.size();
    }
} // namespace econometrics
