#include<string>
#include<iostream>
#include "exercise_16_1.h"
using namespace std;
int main()
{
    cout << compare(2,4) << endl;
    cout << compare(string("plato"),string("wujun")) << endl;
    cout << compare(3.1,0.2) << endl;
    cout << compare(string("plato"),string("plato")) << endl;
    return 0;
}
