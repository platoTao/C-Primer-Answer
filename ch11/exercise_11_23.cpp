#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

int main()
{
    multimap<string,vector<string> > family;
    string family_name;

    while (cin >> family_name)
    {
        vector<string> children;
        string child;

        while (cin >> child)
        {
            children.push_back(child);
        }
        family.insert({family_name,children});
        cin.clear();
    }
    auto beg = family.cbegin();
    while(beg != family.cend())
    {
        cout << beg->first << endl;
        if(!(beg->second).empty())
        {
            for(const auto &s : beg->second)
                cout << s << " ";
            cout <<endl;
        }
        ++beg;
    }
    return 0;
}
