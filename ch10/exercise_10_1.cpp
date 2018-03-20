#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int val;
    cin >> val;
    int n;
    vector<int> v;
    while(cin>>n)
        v.push_back(n);
    auto result = count(v.begin(),v.end(),val);
    cout << "The number " << val << " has been appeard " << result << " times." << endl;
}
