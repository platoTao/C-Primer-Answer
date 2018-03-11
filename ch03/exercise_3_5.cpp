#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){

    string s1,s2;

    while(cin>>s2){
            //s1 += s2;
            s1 += s2;
            s1 += ' ';
    }
    cout << s1 << endl;

    return 0;
}
