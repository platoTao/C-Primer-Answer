#include<iostream>
#include<vector>

using namespace std;

int main(){

    int grade = 34;
    //from right to left
    string gra = grade>90?"high pass":(grade>75)?"pass":(grade<60)?"fail":"low pass";
    cout << gra << endl;
    /*=============================*/
    if(grade>90)
        cout << "high pass";
    else if(grade>75)
        cout << "pass";
    else if(grade>60)
        cout << "low pass";
    else
        cout << "fail";
    return 0;
}
