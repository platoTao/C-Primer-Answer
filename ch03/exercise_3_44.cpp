#include<iostream>

using namespace std;
using int_array = int[4];
int main(){

    int ia[3][4];
    for(size_t i=0;i<3;i++){
        for(size_t j=0;j<4;j++){
            ia[i][j] = i*4+j;
        }
    }

    for(int_array *i =ia;i!=ia+3;i++){
        for(int *j = *i;j!=*i+4;j++)
            cout << *j << " ";
        cout <<endl;
    }
}
