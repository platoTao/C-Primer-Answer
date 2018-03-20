#include <iostream>
#include <vector>

using namespace std;

bool find_element(vector<int>::const_iterator beg,vector<int>::const_iterator ends,int n)
{
    while(beg != ends)
    {
        if(*beg == n)
            return true;
            ++beg;
    }
    return false;
}

int main()
{
    vector<int> v1{1,2,3,4};
    bool result = find_element(cbegin(v1),cend(v1),2);
    if(result)
        cout << "Sucess" << endl;
    else
        cout << "Failed" <<endl;
    return 0;
}
