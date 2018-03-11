#include<iostream>

using namespace std;

int mul(int a,int b){
    static int Cnt = 0;
    ++Cnt;
    if(Cnt==2)return Cnt;
    return a*b;
}

int main(){

    int i,j;
    cout << "Please enter two numbers:" << endl;
    for(int k =0;k<2; ++k){
        cin >> i >> j;
        int m = mul(i,j);
        cout << m << endl;
    }

    return 0;
}
