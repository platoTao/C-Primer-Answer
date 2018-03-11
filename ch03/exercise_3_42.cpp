#include<iostream>
#include<vector>

using namespace std;

int main(){

    int a[10];
    vector<int> numbers(12,42);
    auto c = numbers.begin();
    for(size_t i =0;i<10&&(c!=numbers.end());i++,c++)
        a[i] = *c;
    for(auto i:a)
        cout << i << " ";
    return 0;
}
