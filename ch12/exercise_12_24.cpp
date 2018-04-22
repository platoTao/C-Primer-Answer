#include<iostream>

using namespace std;

int main()
{
    char* str = new char[100];
    while(cin >> str)
    {
        char* p = new char[20];
        size_t i = 0;
        for(;str[i] != '\0';++i)
            p[i] = str[i];
        for(auto j = 0;j<i;++j)
            cout << *(p+j);
        cout << endl;
        delete [] p;
    }
    delete [] str;
    return 0;
}
