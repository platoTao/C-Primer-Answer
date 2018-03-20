#include<iostream>

using namespace std;

int main()
{
    int a = 1;
    auto add = [a](int b){return a+b;};
    cout << add(2);
    return 0;
}
