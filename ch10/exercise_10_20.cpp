#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto last_unique = unique(words.begin(),words.end());
    words.erase(last_unique,words.end());
}


void biggies(vector<string> &words,vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(),words.end(),[](const string &s1,const string &s2)
                {return s1.size() < s2.size(); });
    auto wc = stable_partition(words.begin(),words.end(),[sz](const string &s){return s.size() < sz; });
    auto count = count_if(words.begin(),words.end(),[sz](const string &s){return s.size() >= sz;});
    cout << count << " " <<  "words" << " of length " << sz << " or longer " << endl;
    for_each(wc,words.end(),[](const string &s){cout << s << " ";});
    cout << endl;
}
int main()
{
    vector<string> v = {"fox","fives","jumps","race","the","the","read","triumph","more","more"};
    biggies(v,6);
    return 0;
}
