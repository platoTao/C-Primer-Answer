#include<iostream>

using namespace std;

double Abs(double val){

    if(val<0)
        val = 0-val;
    return val;
}

int main(){

    double i;
    cout << "Please enter a number:" << endl;
    cin >> i;
    double j = Abs(i);
    cout << "abs("<< i << ") is : " << j << endl;
    return 0;
}
