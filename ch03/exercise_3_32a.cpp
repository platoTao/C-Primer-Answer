#include<iostream>
#include<vector>

using namespace std;

int main(){
    constexpr size_t arry_size = 10;
    int a[arry_size] = {0,1,2,3,4,5,6,7,8,9};
    int b[arry_size] = {};
    for(size_t i=0;i<10;i++)
        b[i]=a[i];
    for(auto i:b)
        cout << i << " ";
    return 0;
}
