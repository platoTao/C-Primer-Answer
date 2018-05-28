#include "exercise_15_7.h"

int main()
{
    Bulk_quote item("x",4.5,30,10,0.1);
    print_total(std::cout,item,20);
    print_total(std::cout,item,40);

    return 0;

}
