#include<iostream>
#include<utility>

template <typename F,typename T1,typename T2>
void flip (F f,T1 &&t1,T2 &&t2)
{
    f(std::forward<T2>(t2),std::forward<T1>(t1));
}

void print(int &&n,int &m)
{
    std::cout << ++n << " " << ++m << std::endl;
}

int main()
{
    int a = 1;
    flip(print,a,4);
    std::cout << a << std::endl;
}
