#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main()
{
    vector<int> v1;
    ofstream out("capacity.txt");
    //·­±¶Ôö¼Ó
    while(1)
    {
        out << v1.size() << " " << v1.capacity() << endl;
        v1.push_back(0);
    }
    return 0;
}
