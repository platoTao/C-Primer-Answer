#include<iostream>

using namespace std;

int compare(int,const int*);

int main(){

    int d = 5,m = 13;
    int *p = &m;
    int k = compare(d,p);
    cout << k << endl;
    return 0;
}

int compare(int i,const int* q){
    return i>*q?i:*q;
}

