#include<iostream>
#include<string>
#include<deque>
#include<list>

using namespace std;

int main()
{
    list<int> v1{1,2,3,4,5,6,7,8,9,10};
    deque<int> odds,evens;
    auto it = v1.cbegin();
    while(it != v1.cend())
    {
        if(*(it) %2 == 0)
            evens.push_back(*it);
        else
            odds.push_back(*it);
        ++it;
    }
    for(auto i:odds)
        cout << i << " ";
    cout << endl;
    for(auto i:evens)
        cout << i << " ";
    cout << endl;
    return 0;
}
