#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;


int main()
{
    vector<string> words;
    string word;
    while (cin >> word)
    {
        auto result = find_if(words.begin(),words.end(),[word](const string &p){return p == word;});
        if(result==words.end())
            words.push_back(word);
    }
    for(const auto &w : words)
        cout << w << " ";
    cout << endl;
    return 0;
}
