#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){
    /*
    *string line;
    *while(getline(cin,line)){
    *    if(!line.empty()){
    *               cout << line<<endl;
    *       }
    *}
    */
    string s;
    while(cin>>s){
        cout << s << endl;
    }
    return 0;

}
