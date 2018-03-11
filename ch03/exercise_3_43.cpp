#include<iostream>

using namespace std;

int main(){

    int ia[3][4];
    for(size_t i=0;i<3;i++){
        for(size_t j=0;j<4;j++){
            ia[i][j] = i*4+j;
        }
    }
    /*The first way to print every elemrnt in ia*/
    for(int (&i)[4]:ia){
        for(int j:i)
            cout << j << " ";
        cout << endl;
    }
    cout << endl;
    /*The second way to print every elemrnt in ia*/
        for(size_t i=0;i<3;i++){
            for(size_t j=0;j<4;j++){
                cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    /*The third way to print every elemrnt in ia*/
    for(int (*i)[4]=ia;i!=ia+3;i++){
        for(int *j = *i;j!=*i+4;j++)
            cout << *j << " ";
        cout <<endl;
    }
}
