#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>

using namespace std;
using namespace std::placeholders;

bool check_size(int a,size_t sz)
{
    return a > sz;
}

int main()
{
    vector<int> v {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    string s("hello,world.");
    auto p = find_if(v.begin(),v.end(),bind(check_size,_1,s.size()));
    if(p!=v.end())
        cout << *p;
    return 0;
}
