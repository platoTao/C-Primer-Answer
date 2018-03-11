#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<int> v1;
    int number;
    cout << "Input the numbers:" << endl;
    while(cin>>number)
        v1.push_back(number);
    int m = 0;
    /*
    if(v1.empty()){
        cout << "The vector is not allowed to be empty,please try again." << endl;
        return -1;
    }
    m = v1[0];
    for(decltype(v1.size()) i=1;i<v1.size();i++){
        m += v1[i];
        cout << m << endl;
        m = v1[i];
    }
    */
    int sum =0;
    decltype(v1.size()) j = v1.size()-1;
    for(decltype(j) i=0;i<v1.size();i++){
        sum = v1[i] + v1[j];
        cout << sum <<endl;
        sum = 0;
        if(i==j||j-i==1)break;
        --j;
    }
    return 0;
}
