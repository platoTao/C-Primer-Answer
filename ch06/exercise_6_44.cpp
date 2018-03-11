#include<iostream>
#include<string>

using namespace std;

inline bool isShorter(const string &s1,const string &s2){
    return s1.size() < s2.size();
}


int main(){
    string str1 = "Hello",str2 = "World";
    if(isShorter(str1,str2))
        cout << "True";
    else
        cout << "False";
    return 0;
}
