#include<iostream>

using namespace std;

bool have_upper_alpha(const string &s);
void to_lower(string &s);

int main(){

    string str = "hello,World!";
    auto k = have_upper_alpha(str);
    if(k)
        cout << "Have upper alpha."<<endl;
    else
        cout << "Not upper alpha ." << endl;
    to_lower(str);
    cout << str << endl;
    return 0;
}

bool have_upper_alpha(const string &s){
    for(auto i:s){
        if(i<97&&i>64)
            return true;
    }
    return false;
}

void to_lower(string &s){
    for(auto &i:s){
        if(isalpha(i))
            i = tolower(i);
    }
}

