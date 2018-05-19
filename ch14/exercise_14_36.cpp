#include "exercise_14_35.h"

#include<vector>
#include<algorithm>

void print(const string &s)
{
    cout << s << " ";
}

int main()
{
    ReadString readstr;
    vector<string> vec;
    for(int i = 0 ; i < 4 ; ++i)
        vec.push_back(readstr());
    for_each(vec.cbegin(),vec.cend(),print);

}

