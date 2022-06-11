#pragma once
#include <vector>
#include <iterator>
#include <algorithm>

namespace econometrics{
    class Table
    {
    private:
        int mRows, mCols;
        std::vector<double> mData;

        

    public:
        Table() = delete;
        Table(int rows, int cols);
        ~Table();
        
        void transpose();
        void print();

        template <typename BidirectionalIterator>
        void addColumn(BidirectionalIterator begin, BidirectionalIterator end)
        {

        }
    };

};