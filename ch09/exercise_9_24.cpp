#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1;

    vector<int>::iterator beg = v1.begin();
    decltype(beg) end = v1.end();

    auto &val1 = v1.front();
    auto &val2 = v1.back();

    auto &val3 = v1[0];
    auto &val4 = v1.at(0);

    //out of range
    //cout << *beg ;
    //cout << *(--end);
    //cout << val1;
    //cout << val2;
    //cout << val3;
    cout << val4;
}
