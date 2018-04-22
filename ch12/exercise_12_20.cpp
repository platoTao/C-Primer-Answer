#ifndef _BSP_H_
#define _BSP_H_
#include<iostream>
#include<memory>
#include<new>
#endif // _BSP_H_

#include "exercise_12_19.h"


using namespace std;

int main()
{
    StrBlob sb;
    string s;
    while(cin >> s)
    {
        sb.push_back(s);
    }
    StrBlobPtr p = sb.begin();

    while(p != sb.end())
    {
        cout << p.derf() <<endl;
        p.incr();
    }
}
