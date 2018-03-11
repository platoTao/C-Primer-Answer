#include<iostream>

using namespace std;

void f(){
    cout <<"This is first function." <<endl;
}

void f(int){
    cout <<"This is second function." <<endl;
}

void f(int,int){
    cout <<"This is third function." <<endl;
}

void f(double,double = 3.14){
    cout <<"This is forth function." <<endl;
}

int main(){

    //f(2.56,42);//ambigous
    f(42);//f(int)
    f(42,0);//f(int,int)
    f(2.56,3.14);//f(double,double)
    return 0;
}
