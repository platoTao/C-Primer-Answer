#include "exercise_14_45.h"

int main()
{
    Sales_data item("xyz",4,20);
    std::cout << static_cast<std::string>(item) << std::endl;
    std::cout << static_cast<double>(item) << std::endl;
}
