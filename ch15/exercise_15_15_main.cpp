#include"Bulk_quote.h"

int main()
{
    Bulk_quote item("x",4.5,10,0.1);
    print_total(std::cout,item,30);
}
