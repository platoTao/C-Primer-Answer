#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<const char*> L1{"the","world","meaning"};
    vector<string> v1;
    v1.assign(L1.cbegin(),L1.cend());
    for(auto i:v1)
        cout << i << endl;
    return 0;
}
