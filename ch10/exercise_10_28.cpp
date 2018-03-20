#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

void print(list<int> &lst)
{
    auto beg = lst.begin();
    while(beg != lst.end())
        cout << *(beg++) << " ";
    cout << endl;
}

int main()
{
    vector<int> v1{1,2,3,4,5,6,7,8,9};
    list<int> lst1,lst2,lst3;
    copy(v1.begin(),v1.end(),inserter(lst1,lst1.begin()));
    copy(v1.begin(),v1.end(),front_inserter(lst2));
    copy(v1.begin(),v1.end(),back_inserter(lst3));
    print(lst1);
    print(lst2);
    print(lst3);
    return 0;
}
