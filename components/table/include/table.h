#pragma once
#include <vector>
#include <map>
#include <iterator>
#include <algorithm>
#include <string_view>
#include <filesystem>

namespace econometrics{
    namespace fs = std::filesystem;

    struct Title
    {
        size_t id = 0;
        std::string name;
        std::string description;
    };

    class Table
    {
    private:

        using TableColumns = std::map<Title, std::vector<std::string>>;

        int mRows, mCols;
        TableColumns tableColumns;
        void parseFileDescription(fs::path fileDescription);
        int parseRows(std::string_view line);

    public:
        Table() = delete;
        Table(fs::path fileDescription, fs::path fileContent);
        ~Table();
        
        int getRowsSize();
        int getColumnsSize();
        void transpose();
        void print();

        template <typename BidirectionalIterator>
        void addColumn(BidirectionalIterator begin, BidirectionalIterator end)
        {

        }
    };

};