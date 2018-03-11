#include<iostream>

using namespace std;

int fact(int val){

    int ret = 1;
    while(val>1)
        ret *= val--;
    return ret;
}

int main(){

    int i = 5;
    int j = fact(i);
    cout << "5! is : " << j << endl;
    return 0;
}
