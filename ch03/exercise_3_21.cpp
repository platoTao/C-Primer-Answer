#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    vector<int> v1;//0
    vector<int> v2(10);//10
    vector<int> v3(10,42);//10
    vector<int> v4{10};//1
    vector<int> v5{10,42};//2
    vector<string> v6{10};//10
    vector<string> v7{10,"hi"};//10
    vector<vector<int>> v8{v1,v2,v3,v4,v5};
    vector<vector<string>> v9{v6,v7};
    for(auto i:v8){
        decltype(i.size()) j = i.size();
        cout << "size: " << j << endl;
        if(j==0)cout<< "empty" <<endl;
        else
        {
            for(auto m=i.cbegin();m!=i.end();m++)
                cout << *m << " ";
            cout << endl;
        }
    }
    for(auto i:v9){
        decltype(i.size()) j = i.size();
        cout << "size: " << j << endl;
        if(j==0)cout<< "empty" <<endl;
        else
        {
            for(auto m=i.cbegin();m!=i.end();m++)
                cout << *m << " ";
            cout << endl;
        }
    }
    return 0;
}
