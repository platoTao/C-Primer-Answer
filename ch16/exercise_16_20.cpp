#include<iostream>
#include<vector>
#include<string>

using namespace std;

template <typename Vec>
std::ostream& print(std::ostream &os,const Vec& v)
{
    typename Vec::const_iterator beg = v.begin(),end = v.end();
    while(beg!=end)
    {
        os << *beg++ << " ";
    }
}

int main()
{
    vector<string> v1 = {"hello","world","nice","day"};
    print(cout,v1);
    return 0;
}
