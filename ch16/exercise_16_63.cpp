#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>

using namespace std;

template <typename Vec,typename T>
int Count(const Vec& v,const T &t)
{
    return count(v.cbegin(),v.cend(),t);
}

//template <>
//int Count(const vector<string> &v,const string &s)
//{
//    return count_if(v.cbegin(),v.cend(),[s](const string& s1){return s1==s;});
//}

template<>
int Count(const vector<char *> &v, char* const &s)
{
    int ret = 0;
    for(const auto &a:v){
        if(!strcmp(a,s))
            ++ret;
    }
    return ret;
}


int main()
{
    vector<int> v1 = {1,2,3,2,4,5,6};
    vector<double> v2 = {1.1,1.2,1.3,1.3,1.4,1.4,4.0,7.0};
    vector<char *> v3 = {"hello","hello","world"};
    cout << Count(v1,2) << " " << Count(v2,1.1) << " " << Count(v3,"world") << endl;
    return 0;
}
