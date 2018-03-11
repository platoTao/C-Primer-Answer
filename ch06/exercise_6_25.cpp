#include<iostream>
#include<string>
using namespace std;

int main(int argc,char **argv){
    string s;
    for(size_t i=1;i!=argc;i++)
        s += (string(argv[i]) + " ");
    cout << s << endl;
    return 0;

}
