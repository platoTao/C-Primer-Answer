#include<iostream>
#include<vector>

using namespace std;

int main(){
    constexpr size_t arry_size = 10;
    int a[arry_size] = {0,1,2,3,4,5,6,7,8,9};
    int b[arry_size] = {};
    vector<int> v1;
    for(size_t i=0;i<10;i++)
        v1.push_back(i);
    for(auto i = v1.begin();i!=v1.end();i++)
        b[*i]=*i;
    for(auto i:b)
        cout << i << " ";
    return 0;
}
