#include<iostream>
#include<string>

using namespace std;

string (&str_array(string (&stra)[10]))[10]{
    return stra;
}

int main(){
    string str[10] = {"1","2","3","4","5","6","7","8","9","10"};
    string (&st)[10] = str_array(str);
    for(size_t i = 0;i!=10;i++)
        cout << st[i] <<" ";
    return 0;
}
