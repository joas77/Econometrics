#pragma once
#include <vector>
#include <iterator>
#include <algorithm>
#include <string_view>
#include <filesystem>

namespace econometrics{
    namespace fs = std::filesystem;
    class Table
    {
    private:
        int mRows, mCols;
        void parseFileDescription(fs::path fileDescription);
        int parseRows(std::string_view line);

    public:
        Table() = delete;
        Table(fs::path fileDescription, fs::path fileContent);
        ~Table();
        
        int getRowsSize();
        void transpose();
        void print();

        template <typename BidirectionalIterator>
        void addColumn(BidirectionalIterator begin, BidirectionalIterator end)
        {

        }
    };

};