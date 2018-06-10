#include "shared_ptr.h"
#include "unique_ptr.h"

int main()
{
    int a = 4;
    int *p = &a;
    SP<int> pt = p;
    std::cout << *pt << std::endl;
    SP<int> pt1 = pt;
    std::cout << *pt1 << std::endl;
    UP<int,DebugDelete> up (p);
    std::cout << *up << std::endl;
    int b = 5;
    int *t = &b;
    up.reset();
    up.reset(t);
    auto m = up.release();
    std::cout << *m << std::endl;
}
