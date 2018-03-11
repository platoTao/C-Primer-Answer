#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    string s1 = "Hello";
    string s2 = "Hello";
    char *s3 = "Hello";
    char *s4 = "Hello";
    if(strcmp(s3,s4)==0)
        cout << "Same string."<<endl;
    else if(strcmp(s3,s4)<0)
        cout << "s3 < s4" << endl;
    else
        cout << "s3 > s4" << endl;
    cout << "================" << endl;
    if(s1==s2)
        cout << "Same string."<<endl;
    else if(s3 < s4)
        cout << "s3 < s4" << endl;
    else
        cout << "s3 > s4" << endl;

    return 0;
}
