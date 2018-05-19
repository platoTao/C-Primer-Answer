#include<iostream>
#include<map>
#include<functional>
#include<string>

using namespace std;
struct divide
{
    int operator()(int a,int b) {return a / b ;}
};

int mul(int a,int b)
{
    return a*b;
}
int main()
{
    map<string,function<int(int,int)>> binops;
    binops.insert({"+",plus<int>()});
    binops.insert({"-",[](int a,int b) { return a-b; } });

    int (*fp)(int,int) = mul;
    binops.insert({"*",fp});
    binops.insert({"\\",divide()});
    cout << binops["+"](1,2) << endl;
    cout << binops["-"](1,2) << endl;
    cout << binops["*"](1,2) << endl;
    cout << binops["\\"](1,2) << endl;
}
