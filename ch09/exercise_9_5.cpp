#include <iostream>
#include <vector>

using namespace std;

vector<int>::const_iterator find_element(vector<int>::const_iterator beg,vector<int>::const_iterator ends,int n)
{
    while(beg != ends)
    {
        if(*beg == n)
            return beg;
            ++beg;
    }
    return ends;
}

int main()
{
    vector<int> v1{1,2,3,4};
    auto result = find_element(cbegin(v1),cend(v1),2);
    if(result!=cend(v1))
        cout << "We find the element :" << *result << endl;
    else
        cout << "Failed to search" << endl;
    return 0;
}
