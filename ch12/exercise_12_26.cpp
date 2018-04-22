#include<iostream>
#include<memory>

using namespace std;

int main()
{
    char* str = new char[100];
    while(cin >> str)
    {
        allocator<char> alloc;
        auto const p = alloc.allocate(20);
        auto q = p;
        for(size_t i = 0;str[i] != '\0';++i)
            alloc.construct(q++,str[i]);

        auto t = p;
        while(t != q)
            cout << *t++;
        cout << endl;

        while(q!=p)
            alloc.destroy(--q);
        alloc.deallocate(p,20);
    }
    delete [] str;
    return 0;
}
