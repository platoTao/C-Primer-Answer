#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list<int> flst{1,2,3,4,5,6,7,8,9};
    auto pre = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end())
    {
        if ( *curr % 2 != 0 )
        {
            curr = flst.insert_after(pre,*curr);
            ++pre;
            ++pre;
            ++curr;
            ++curr;
        }
        else
            curr = flst.erase_after(pre);
    }

    for(auto i:flst)
        cout << i << " ";
    return 0;
}
