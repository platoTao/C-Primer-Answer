#include<iostream>

using namespace std;

void swap_pointer(int* &q1,int* &q2);

int main(){

    int m = 5,n = 13;
    int *p1 = &m,*p2 = &n;
    swap_pointer(p1,p2);
    cout << *p1 << " " << *p2 << endl;
    return 0;
}

void swap_pointer(int* &q1,int* &q2){
    int *k = q1;
    q1 = q2;
    q2 = k;
}

