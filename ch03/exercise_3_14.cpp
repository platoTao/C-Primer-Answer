#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v1;
    int number;
    cout << "Input the numbers,ended with EOF" << endl;
    while(cin >> number)
        v1.push_back(number);
    for(auto i:v1)
        cout << i << endl;
    return 0;
}
