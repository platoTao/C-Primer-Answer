#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>::iterator beg,vector<int>::iterator ends){
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
