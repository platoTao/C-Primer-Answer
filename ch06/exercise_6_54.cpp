#include<iostream>
#include<vector>

using namespace std;
typedef int (*pf)(int,int);
int f(int a,int b){
    return a+b;
}

int main(){
    pf F = f;
    vector<pf> v{F};
    cout << (*v[0])(2,3);
    return 0;
}
