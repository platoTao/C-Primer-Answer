#include<iostream>
using namespace std;

int main(){

    int a,b,c,d;
    cout << "Please input four numbers :" << endl;
    cin >> a >> b >> c >> d;
    if(a>b&&b>c&&c>d)
        cout << a << ">" << b <<">" << c << ">" << d << endl;
    else
        cout << "Not true!" << endl;

    return 0;
}
