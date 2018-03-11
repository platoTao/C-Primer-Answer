#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> numbers;
    int d=0;
    for(int i=0;i<10;i++){
        cin >> d;
        numbers.push_back(d);
    }
    for(auto i = numbers.begin();i!=numbers.end();i++){
                *i = 2 * (*i);
        }

    for(auto i:numbers)cout<<i<<endl;
    return 0;
}
