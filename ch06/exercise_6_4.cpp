#include<iostream>

using namespace std;

int fact(int val){

    int ret = 1;
    while(val>1)
        ret *= val--;
    return ret;
}

int main(){

    int i;
    cout << "Please enter a number:" << endl;
    cin >> i;
    int j = fact(i);
    cout << i << "! is : " << j << endl;
    return 0;
}
