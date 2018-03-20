#include <iostream>
#include <vector>
#include<list>
using namespace std;


int main()
{
    vector<int> v1{1,2,3,456,21};
    list<int> v2{1,2,3,4,5};
    cout << (vector<int>(v2.cbegin(),v2.cend())==v1?"True":"False" )<<endl;
    return 0;
}
