#include<iostream>

using namespace std;

void reset(int &m);

int main(){

    int i = 5;
    reset(i);
    cout << i << endl;
    return 0;
}
void reset(int &m){
    m=0;
}
