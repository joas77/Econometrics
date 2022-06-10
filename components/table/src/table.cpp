#include <table.h>

namespace econometrics
{
    Table::Table(int rows, int cols):
        mRows(rows), mCols(cols),
        mColData(mCols),
        mRowData(mRows)
        {}
    
    Table::~Table(){}
} // namespace econometrics
