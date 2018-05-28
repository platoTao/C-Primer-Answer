#include "exercise_15_5.h"

int main()
{
    Bulk_quote item("xyz123",4.5,10,0.1);
    print_total(std::cout,item,20);
    Quote item1("xcv",5.6);
    Quote *p = &item;
    p->debug();
    p = &item1;
    p->debug();
    return 0;
}
