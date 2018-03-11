#include<iostream>
#include<vector>

using namespace std;

int main(){
    constexpr size_t arry_size = 10;
    int a[arry_size] = {0,1,2,3,4,5,6,7,8,9};
    for(auto i:a)
        cout << i << " ";
    return 0;
}
