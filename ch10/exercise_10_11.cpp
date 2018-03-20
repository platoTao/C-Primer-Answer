#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

void elimDups(vector<string> &words)
{
    auto beg = words.begin();
    auto end = words.end();
    sort(beg,end);
    auto end_unique = unique(beg,end);
    words.erase(end_unique,end);
}

bool is_shorter(const string &s1,const string &s2)
{
    return s1.size()<s2.size();
}

int main()
{
    vector<string> v{"fox","jumps","over","quick","red","red","slow","the","the","turtle"};
    elimDups(v);
    stable_sort(v.begin(),v.end(),is_shorter);
    for(const auto &i:v)
        cout << i << " ";
    return 0;
}
