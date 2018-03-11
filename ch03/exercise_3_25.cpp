#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v1;
    vector<int> v2(11,0);
    int grade;
    cout << "Input the grade:" << endl;
    while(cin>>grade)
        v1.push_back(grade);

    for(auto i:v1){

        ++*(v2.begin() + i / 10);
    }
    for(auto i:v2)
        cout << i << endl;
    return 0;
}
