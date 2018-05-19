#include<vector>
#include<functional>
#include<algorithm>
#include<iostream>

using namespace std;

bool dividedByAll(vector<int> &ivec,int dividend)
{
//    return count_if(ivec.begin(),ivec.end(),bind1st(modulus<int>(),dividend)) == 0;
    modulus<int> mod;
    return count_if(ivec.begin(),ivec.end(),[&mod,&dividend](int a) { return mod(a,dividend);}) == 0;
}

int main()
{
    vector<int> vec1 = {4,7,8,10};
    vector<int> vec2 = {10,20,30,40};
    if(!dividedByAll(vec1,2))
        cout << "False" <<endl;

    if(dividedByAll(vec2,10))
        cout << "True" <<endl;


    return 0;
}
