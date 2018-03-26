#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,int> v = {{1,2},{2,3}};
    auto beg = v.begin();
    while(beg != v.end())
    {
        ++beg->second;
        ++beg;
    }
    for(const auto &i :v)
        cout << i.first << " " << i.second << endl;
    return 0;
}
