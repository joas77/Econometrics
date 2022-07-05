#include <table.h>
#include "testUtils.h"

using namespace econometrics;

bool test_get_cell_value(std::string_view description)
{
    testMsg(description);
    Table table(DATA_FILES_PATH + TABLE_DESC, DATA_FILES_PATH + TABLE_CONTENT);
    return assertTrue(table.getCell(0,0) == "3.10", "First cell contains 3.10");

}