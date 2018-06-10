#include<iostream>
using namespace std;

template <typename T>
ostream& print(ostream &os,const T& t)
{
    return os << t;
}

template <typename T,typename ... Args>
ostream& print(ostream &os,const T &t,const Args& ... args)
{
    os << t << " ";
    return print(os,args...);
}

int main()
{
    int a = 1,b = 2,c = 3;
    print(cout,a,b,c,5);
}
