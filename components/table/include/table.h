#pragma once
#include <vector>
#include <iterator>
#include <algorithm>
#include <filesystem>

namespace econometrics{
    namespace fs = std::filesystem;
    class Table
    {
    private:
        int mRows, mCols;
        void parseFileDescription(fs::path fileDescription);

    public:
        Table() = delete;
        Table(fs::path fileDescription, fs::path fileContent);
        ~Table();
        
        void transpose();
        void print();

        template <typename BidirectionalIterator>
        void addColumn(BidirectionalIterator begin, BidirectionalIterator end)
        {

        }
    };

};