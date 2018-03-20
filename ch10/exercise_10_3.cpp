#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> v;
    while(cin>>n)
        v.push_back(n);
    auto result = accumulate(v.cbegin(),v.cend(),0);
    cout << "The sum is: " << result << "." << endl;
    return 0;
}
