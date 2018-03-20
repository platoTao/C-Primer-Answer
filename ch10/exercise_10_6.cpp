#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    fill_n(v.begin(),v.size(),0);
    for(auto i:v)
        cout << i << " ";
    return 0;
}
