#include <string>
#include <iostream>

using namespace std;

int main(){

    string s1;
    while(cin>>s1){
        /*
        *for(auto &c:s1)c = 'x';
        */

        string::size_type index = 0;
        while(!s1.empty()&&index<s1.size()){
                s1[index] = 'x';
                index++;
        }
        cout<<s1<<endl;
    }

    return 0;
}
