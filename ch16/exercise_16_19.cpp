#include<iostream>
#include<vector>
#include<string>

using namespace std;

template <typename Vec>
std::ostream& print(std::ostream &os,const Vec& v)
{
    for(typename Vec::size_type i = 0;i<v.size();++i)
        os << v.at(i) << " ";
    return os;
}

int main()
{
    vector<string> v1 = {"hello","world","nice","day"};
    print(cout,v1);
    return 0;
}
