#include<iostream>
#include<string>
#include<vector>
#include<deque>

using namespace std;

int main()
{
    vector<string> str;
    deque<string> deq;
    string word;
    while(cin >> word)
        str.push_back(word);
     deq.assign(str.cbegin(),str.cend());
    auto dbeg = deq.cbegin();
    while(dbeg != deq.end())
        cout << *(dbeg++) << endl;
    return 0;
}
