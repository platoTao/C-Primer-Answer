#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    vector<string> v1;
    string s;
    cout << "Input the string,ended with EOF:" << endl;
    while(cin >> s)
        v1.push_back(s);
    for(auto i:v1)
        cout << i << endl;
    return 0;
}
