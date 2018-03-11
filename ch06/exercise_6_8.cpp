#include<iostream>

using namespace std;

int onelse(void){
    static int Cnt = 0;
    ++Cnt;
    if(Cnt==1)return 0;
    return 1;
}

int main(){

    for(int k =0;k<10; ++k){
        int m = onelse();
        cout << m << endl;
    }

    return 0;
}
