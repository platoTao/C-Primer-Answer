#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> v1;
    for(auto i:ia)
        v1.push_back(i);
    list<int> Li(v1.begin(),v1.end());

    auto vit = v1.begin();
    while(vit != v1.end())
    {
        if(*vit % 2 == 0)
            vit = v1.erase(vit);
        if(vit==v1.end())
            break;
        ++vit;
    }

    auto lit = Li.begin();
    while( lit != Li.end())
    {
        if(*lit % 2 !=0 )
            lit = Li.erase(lit);
        if(lit==Li.end())
            break;
        ++lit;
    }
    for(auto i:v1)
        cout << i << " ";

    return 0;

}
