#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v1(10,42);
    vector<int> v2(10,42);
    auto p1 = v1.cbegin();
    auto p2 = v2.cbegin();
    for(;p1!=v1.cend()&&p2!=v2.cend();p1++,p2++)
        if(*p1!=*p2)break;
    if(p1!=v1.cend()||p2!=v2.cend())
        cout << "Vector v1 not equals v2 " << endl;
    else
        cout << "Vector v1 equals v2";
    return 0;
}
