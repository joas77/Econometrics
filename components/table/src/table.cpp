#include <table.h>

namespace econometrics
{
    Table::Table(int rows, int cols):
        mRows(rows), mCols(cols),
        mData(mCols*mRows)
        {}
    
    Table::~Table(){}
} // namespace econometrics
