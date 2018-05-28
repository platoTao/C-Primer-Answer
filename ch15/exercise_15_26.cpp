#include "Bulk_quote.h"

int main()
{
    Quote base("C++ Primer",128.0);
    Bulk_quote bulk("Core Python Programming",89,5,0.19);
    std::cout << base;
    std::cout << bulk;

    Quote base2(base);
    base2 = base;
    Quote base3(std::move(base));
    base3 = std::move(base2);

    Bulk_quote bulk1(bulk);
    bulk1 = bulk;

    return 0;
}

