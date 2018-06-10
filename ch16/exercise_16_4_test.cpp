#include<iostream>
#include<vector>
#include<list>
#include<string>
#include "exercise_16_4.h"
using namespace std;

int main()
{
    vector<int> vec1{1,2,3,4,5,6,7,8,9};
    auto iter1 = find(vec1.begin(),vec1.end(),3);
    cout << *iter1 << endl;
    list<string> lst{"hello","world","nice","day"};
    auto iter2 = find(lst.begin(),lst.end(),"hello");
    cout << *iter2 <<endl;
}
