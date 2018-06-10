#include "blobptr.h"
#include<iostream>

using namespace std;

int main()
{
    Blob<int> b = {1,2,3,4,5,6,20};
    vector<string> strvec{"hello","world"};
    Blob<string> bm(strvec.begin(),strvec.end());
    cout << b.size() << endl;
    b.push_back(8);
    cout << b.size() << endl;
    b.pop_back();
    cout << b.size() << endl;
    cout << b.back() << endl;
    cout << b[3] << endl;
    Blob<string> b1;
    auto const a = b[3];
    cout << "+++++++++++++test BlobPtr ++++++++++++++++++" << endl;
    BlobPtr<int> bp(b,3);
    cout << *bp << endl;
    cout << *++bp << endl;
    cout << *--bp << endl;
    cout << *bp++ << endl;
    cout << *bp-- << endl;
    return 0;
}
