#include<iostream>
#include<vector>

using namespace std;

int main(){

    int a[] = {1,2,3,4,5,6};
    vector<int> numbers(begin(a),end(a));
    for(auto i:numbers)
        cout << i << " ";
    return 0;
}
