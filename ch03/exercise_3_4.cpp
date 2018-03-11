#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){

    string s1,s2;
    while(cin>>s1>>s2){
        /*
        *if(s1==s2)cout<< s1 <<" equal " << s2<<endl;
        *else if(s1<s2)
        *    cout<< s1 << "<" <<s2<<endl;
        *else
        *    cout << s1 << ">" << s2<<endl;
        */
        if(s1.size()==s2.size())
            cout << "equal" << endl;
        else if(s1.size()<s2.size()) cout << s2 <<endl;
        else cout << s1 << endl;

    }
    return 0;
}
