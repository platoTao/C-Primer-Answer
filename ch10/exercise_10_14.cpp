#include<iostream>

using namespace std;

int main()
{
    auto add = [](int a,int b)->int{return a+b;};
    cout << add(1,3);
    return 0;
}
