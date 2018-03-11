#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v1{0,1,1,2},v2{0,1,1,2,3,5,8};
    decltype(v1.size()) index = 0;

    for(;v1[index]==v2[index];index++){
        if(index==v1.size()||index==v2.size())
            break;
    }
    if(index==v2.size()||index==v1.size())
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;

}
