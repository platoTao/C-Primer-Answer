#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

bool is_long_enough(const string &s1)
{
    return s1.size()>= 5;
}

int main()
{
    vector<string> words{"fox","jumps","over","quick","red","red","slow","the","the","turtle"};
    auto last_true = partition(words.begin(),words.end(),is_long_enough);
    for(auto beg = words.begin();beg!=last_true;beg++)
        cout << *beg << " ";

    return 0;
}
