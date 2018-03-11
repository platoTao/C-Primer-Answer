#include<iostream>
#include<vector>

using namespace std;

int main(){
    constexpr size_t arry_size = 10;
    int a[arry_size] = {0,1,2,3,4,5,6,7,8,9};
    int b[arry_size] = {0,1,2,3,4,5,6,7,8,9};
    int *p1 = a;
    int *p2 = b;
    for(;p1!=end(a)&&p2!=end(b);p1++,p2++)
        if(*p1!=*p2)break;
    if(p1!=end(a)||p2!=end(b))
        cout << "a not equal b " << endl;
    else
        cout << "a equals b " << endl;
    return 0;
}
