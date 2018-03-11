#include<iostream>
#include<string>

using namespace std;

int main(){

    string rsp;
    do{
        string s1,s2;
        cout << "Please enter two strings :" <<endl;
        cin >> s1 >> s2;
        if(s1.size()>s2.size())
            cout << "The shorter string is " << s2 << endl;
        else if(s1.size()<s2.size())
            cout << "The shorter string is " << s1 << endl;
        else
            cout << "The two strings are same length." << endl;
        cout << "Do you want to continue ?[y/n]";
        cin >> rsp;
    }while(!rsp.empty()&&rsp[0]!='n'&&rsp[0]!='N');
    return 0;

}
