#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

int main()
{
    vector<string> str;
    string word;
    while(cin >> word)
        str.push_back(word);
    list<string> Li(str.cbegin(),str.cend());
    auto dbeg = Li.cbegin();
    while(dbeg != Li.end())
        cout << *(dbeg++) << endl;
    return 0;
}
