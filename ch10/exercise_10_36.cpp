#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v1{1,2,3,4,0,6,0,3,0,5,6,7};
    auto target = find(v1.crbegin(),v1.crend(),0);
    cout << distance(target,v1.crend()) << endl;
    return 0;
}
