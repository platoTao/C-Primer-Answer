#include<iostream>
using namespace std;

template <typename ... Args>
void g(Args ... args)
{
    cout << sizeof...(Args) << " " << sizeof...(args) << endl;
}

int main()
{
    int a;
    const char *s = "hello";
    g(a,s,3);
}
