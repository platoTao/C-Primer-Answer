#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> str{"hello","world","good","night"};

    auto end = str.cend();
    while(end != str.cbegin())
    {
        --end;
        cout << *end<< " ";
        if(end == str.cbegin())
            break;
    }
    cout <<endl;
    return 0;
}
