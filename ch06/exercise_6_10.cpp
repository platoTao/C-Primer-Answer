#include<iostream>

using namespace std;

void swap_int(int* p,int* q);

int main(){

    int i = 5,j = 10;
    int *m = &i,*n = &j;
    swap_int(m,n);
    cout << i << " " << j << endl;
    return 0;
}
void swap_int(int* p,int* q){
    int k;
    k = *p;
    *p = *q;
    *q = k;
}
