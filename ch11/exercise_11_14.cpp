#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<utility>


using namespace std;

struct birday
{
    int year;
    int mouth;
    int day;
};

void add_kids(vector<pair<string,birday> > &kids)
{
    cout << "Please enter kids'name " <<endl;
    string name;
    birday bir;
    while(cin >> name >> bir.year >> bir.mouth >> bir.day)
    {
        kids.push_back(make_pair(name,bir));
    }
}

void add_family(map<string,vector<pair<string,birday> > > &fam,string family_name,vector<pair<string,birday> > &kids)
{
    add_kids(kids);
    fam[family_name] = kids;
}

int main()
{
    map<string,vector<pair<string,birday> > > family;
    string family_name;
    while(cin >> family_name)
    {
        vector<pair<string,birday> > children;
        add_family(family,family_name,children);
        cin.clear();
    }
    for(const auto &fam : family)
    {
        cout << "family name is : " << fam.first << endl;

        for(const auto &k:fam.second)
            cout << k.first << " " << k.second.year << k.second.mouth << k.second.day << endl;
        cout << endl;
    }

    return 0;
}
