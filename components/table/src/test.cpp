#include <iostream>
#include <table.h>

using namespace econometrics;

int main()
{
    std::cout << "hello world " << std::endl;
    Table table(3,3);
    std::vector<int> v{1,2,3};
    table.addColumn(v.begin(), v.end());
    
    return 0;
}