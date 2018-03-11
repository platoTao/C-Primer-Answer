#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    for(auto &n:v1){
        n=n%2?n*2:n;
        cout << n << " ";
    }
    return 0;
}
