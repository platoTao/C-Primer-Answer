#include<iostream>
#include<vector>

using namespace std;
#define NDEBUG

void print(vector<int>::iterator beg,vector<int>::iterator ends){
#ifndef NDEBUG
    cout << "size:" << ends-beg << endl;
#endif // NDEBUG
    if(beg == ends)
        return;
    else{
        cout << *beg << " ";
        return print(++beg,ends);
    }
}

int main(){
    vector<int> v1 = {1,2,3,4,5,6,7,8};
    print(v1.begin(),v1.end());
    return 0;
}
