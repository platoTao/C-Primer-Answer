#include "exercise_14_5.h"
#include "exercise_14_5.cpp"
int main()
{
    Book b1;
    Book b2("X","Y","Z");
    b1 = b2;
    cout << b1;
    cout << endl;
    Book b3(cin);
    if(b3 != b1)
        cout<< "Yes" << endl;
    if(b3 == b1)
        cout << "No" <<endl;
    if(b3 > b1)
        cout << "b3 > b1" << endl;
    if(b3 < b1)
        cout << "b3 < b1 " << endl;
    return 0;
}
