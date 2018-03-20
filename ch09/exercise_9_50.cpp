#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<string> v{"1","2","3.5","4","5","6","7"};
    int sum1 = 0;
    for(auto i:v)
        sum1 += stoi(i);
    cout << "The sum is: " << sum1 <<endl;

    float sum2 = 0.0;
    for(auto i:v)
        sum2 += stof(i);
    cout << "the sum is :" << sum2 << endl;
    return 0;
}
