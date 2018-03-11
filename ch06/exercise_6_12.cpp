#include<iostream>

using namespace std;

void swap_int(int &p,int &q);

int main(){

    int i = 5,j = 10;
    swap_int(i,j);
    cout << i << " " << j << endl;
    return 0;
}
void swap_int(int &p,int &q){
    int k;
    k = p;
    p = q;
    q = k;
}
