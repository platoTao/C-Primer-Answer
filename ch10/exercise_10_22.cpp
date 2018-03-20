#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>

using namespace std;
using namespace std::placeholders;

void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto last_unique = unique(words.begin(),words.end());
    words.erase(last_unique,words.end());
}

bool is_shorter(const string &s1,const string &s2)
{
    return s1.size() < s2.size();
}

bool is_long_enough(const string &s,vector<string>::size_type sz)
{
    return s.size() < sz;
}
bool is_long(const string &s,vector<string>::size_type sz)
{
    return s.size() > sz;
}
void print(const string &s,ostream &os)
{
    os << s << " ";
}

void biggies(vector<string> &words,vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(),words.end(),is_shorter);
    auto wc = stable_partition(words.begin(),words.end(),bind(is_long_enough,_1,sz));
    auto count = count_if(words.begin(),words.end(),bind(is_long,_1,sz));
    cout << count << " " <<  "words" << " of length " << sz << " or longer " << endl;
    for_each(wc,words.end(),bind(print,_1,ref(cout)));
    cout << endl;
}
int main()
{
    vector<string> v = {"fox","fives","jumps","race","the","the","read","triumph","more","more"};
    biggies(v,6);
    return 0;
}
