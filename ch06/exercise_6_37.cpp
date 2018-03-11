#include<iostream>
#include<string>

using namespace std;
using str_a = string[10];

string str[10] = {"1","2","3","4","5","6","7","8","9","10"};

string (&str_array0(string (&stra)[10]))[10]{
    return stra;
}

str_a &str_array1(str_a &stra){
    return stra;
}

auto str_array2(string (&stra)[10])->string (&)[10]{
    return stra;
}

decltype(str) &str_array3(decltype(str) &stra){
    return stra;
}
int main(){

    string (&st)[10] = str_array3(str);
    for(size_t i = 0;i!=10;i++)
        cout << st[i] <<" ";
    return 0;
}
