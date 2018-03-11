#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<string> v1;
    string word;
    cout << "Input the words:" << endl;
    while(cin>>word)
        v1.push_back(word);
    for(auto &i:v1){
        for(auto &j:i){
                if(isalpha(j))j = toupper(j);
        }
    }
    for(auto i:v1)
        cout << i << endl;
    return 0;
}
