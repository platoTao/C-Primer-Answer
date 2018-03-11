#include<iostream>

using namespace std;

int main(){

    int ia[3][4];
    for(size_t i=0;i<3;i++){
        for(size_t j=0;j<4;j++){
            ia[i][j] = i*4+j;
        }
    }

    for(auto &i:ia){
        for(auto j:i)
            cout << j << " ";
        cout <<endl;
    }
}
