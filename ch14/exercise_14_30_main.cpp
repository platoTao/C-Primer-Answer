#include"exercise_14_30.h"
#include "exercise_14_30.cpp"

int main()
{
    StrBlob a1 = {"hi","bye","now"};
    StrBlobPtr p(a1);
    *p = "okay";
    cout << p->size() << endl;
    cout << (*p).size() <<endl;
}
