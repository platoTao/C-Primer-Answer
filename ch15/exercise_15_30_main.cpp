#include "exercise_15_30.h"

int main()
{
    Basket basket;
    Bulk_quote bulk("x",10,20,0.1);
    Quote base("x",10);
    basket.add_item(bulk);
    basket.add_item(base);
    basket.total_receipt(cout);
    return 0;
}
