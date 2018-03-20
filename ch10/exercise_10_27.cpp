#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,5,6,5,7,8,8};
    list<int> lst;
    unique_copy(v1.begin(),v1.end(),inserter(lst,lst.begin()));
    for(auto i:lst)
        cout << i << " ";
    return 0;
}
