#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string val;
    cin >> val;
    string str;
    vector<string> v;
    while(cin>>str)
        v.push_back(str);
    auto result = count(v.begin(),v.end(),val);
    cout << "The string " << val << " has been appeard " << result << " times." << endl;
}
