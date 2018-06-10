#include<iostream>
#include<sstream>
#include<string>


using namespace std;

template <typename T>
string debug_rep(const T &t)
{
    ostringstream ret;
    ret << t;
    return ret.str();
}
template <>
string debug_rep(const char *p)
{
    return debug_rep(string(p));
}

template <typename T>
ostream& print(ostream &os,const T &t)
{
    return os << t;
}

template <typename T,typename ... Args>
ostream& print(ostream &os,const T &t,const Args& ... args)
{
    os << t << " ";
    return print(os,args...);
}

template<typename ... Args>
ostream& errorMsg(ostream &os,const Args&... args)
{
    return print(os,debug_rep(args)...);
}

int main()
{
    int a = 1,b = 2,c = 3;
    errorMsg(cerr,a,b,c,a);
}
