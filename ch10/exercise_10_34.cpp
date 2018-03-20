#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> str{"hello","world","good","night"};

    auto beg = str.crbegin();
    while(beg != str.crend())
    {
        cout << *beg<< " ";
        ++beg;
    }
    cout <<endl;
    return 0;
}
