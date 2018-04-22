#include<iostream>
#include<memory>
#include<new>

using namespace std;

int main()
{
    unique_ptr<int> p1(new int(10));
    //unique_ptr<int> p2 = p1;
    //unique_ptr<int> p2(p1.release());
    cout << *p1 << endl;
    p1.reset(nullptr);

    return 0;
}
