#include "vec.h"
#include<string>
#include<iostream>
using namespace std;

int main()
{
    Vec<string> v = {"hello","world","nice"};
    cout << v.size() <<" " << v.capacity() << endl;
    Vec<string> v1 = v;
    v1.push_back("day");
    cout << v1.size() <<" " << v1.capacity() << endl;
    cout << *v1.begin() << endl;
}
