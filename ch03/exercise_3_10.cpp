#include <string>
#include <iostream>

using namespace std;

int main(){

    string s1;
    while(cin>>s1){
        string::size_type index = 0;
        while(!s1.empty()&&index<s1.size()){
            if(ispunct(s1[index])){
                string::size_type n = index+1;
                for(;n<=s1.size();n++)
                    s1[n-1] = s1[n];
                s1[n] = '\0';
            }
            ++index;
        }
        cout<<s1<<endl;
    }

    return 0;
}
