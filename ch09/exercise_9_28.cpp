#include<iostream>
#include<forward_list>
#include<string>

using namespace std;

void fuc(forward_list<string> &flst,const string &s1,const string &s2)
{
    auto it = flst.begin();
    auto pre = flst.before_begin();
    while(it != flst.end())
    {
        if(*it==s1)
        {
            flst.insert_after(pre,s2);
            return;
        }
        pre = it;
        ++it;
    }
    flst.insert_after(pre,s2);

}

int main()
{
    forward_list<string> flst{"hello","word","nice","dream"};
    string s1 = "hell",s2 = "night";
    fuc(flst,s1,s2);
    for(auto i:flst)
        cout << i << " ";
    return 0;


}
