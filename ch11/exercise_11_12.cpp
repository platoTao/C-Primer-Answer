#include<utility>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<pair<string,int>> v;
    string s;
    int i;
    while(cin >> s >> i)
    {
        //auto p = make_pair(s,i);
        //pair<string,int> p(s,i);
        pair<string,int> p = {s,i};

        v.push_back(p);
        cin.clear();
    }
    for(const auto &p : v)
        cout << p.first << " " << p.second << endl;
    return 0;
}
