#include<iostream>
#include<map>
#include<vector>
#include<string>


using namespace std;

void add_kids(vector<string> &kids)
{
    cout << "Please enter kids'name " <<endl;
    string name;
    while(cin >> name)
        kids.push_back(name);
}

void add_family(map<string,vector<string> > &fam,string family_name,vector<string> &kids)
{
    add_kids(kids);
    fam[family_name] = kids;
}

int main()
{
    map<string,vector<string> > family;
    string family_name;
    while(cin >> family_name)
    {
        vector<string> children;
        add_family(family,family_name,children);
        cin.clear();
    }
    for(const auto &fam : family)
    {
        cout << "family name is : " << fam.first << endl;

        for(const auto &k:fam.second)
            cout << k << " ";
        cout << endl;
    }

    return 0;
}
