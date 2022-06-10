#pragma once
#include <vector>

namespace econometrics{
    class Table
    {
    private:
        int mRows, mCols;
        std::vector<double> mColData;
        std::vector<double> mRowData;

    public:
        Table() = delete;
        Table(int rows, int cols);
        ~Table();

        void transpose();
        void print();
    };

};