#include <iostream>
#include "exercise_14_37.h"
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    Intcompare icmp(2);
    replace_if(vec.begin(),vec.end(),icmp,100);
    for_each(vec.begin(),vec.end(),[](int a){ cout << a << " "; });

    return 0;
}
