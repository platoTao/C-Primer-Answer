#include<iostream>
#include<vector>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,0,6,0,3,0,5};
    list<int> lst(v1.crbegin()+3,v1.crbegin()+8);

    for (auto i : lst) std::cout << i << " ";
    return 0;
}
