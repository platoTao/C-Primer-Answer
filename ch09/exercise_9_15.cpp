#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> v1{1,2,3,456,21};
    vector<int> v2{1,2,3,4,5};
    cout << (v1==v2?"True":"False" )<<endl;
    return 0;
}
