#include<iostream>
#include<vector>

using namespace std;
typedef int (*pf)(int,int);
int Add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mul(int a,int b){
    return a*b;
}

int divi(int a,int b){
    return a/b;
}

int main(){
    pf f1 = Add,f2 = sub,f3 = mul,f4 = divi;
    vector<pf> v{f1,f2,f3,f4};
    for(auto i:v)
        cout << (*i)(4,2) << " ";
    return 0;
}
