#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<char> ch{'h','e','l','l','o',',','w','o','r','l','d'};
    string s(ch.begin(),ch.end());
    cout << s <<endl;
    return 0;
}
