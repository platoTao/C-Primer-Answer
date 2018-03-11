#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    const char ca[] = {'h','e','l','l','o'};
    const char *cp = ca;
    int i =0;
    while (*cp){
        i++;
        cout << *cp << i <<endl;
        ++cp;
    }
    return 0;
}
