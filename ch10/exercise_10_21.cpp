#include <iostream>

using namespace std;

int main()
{
    int val = 88;
    auto f = [&val]()->bool
    {
        --val;
        return val==0?true:false;
    };
    while(!f());
    cout << val;
    return 0;
}
