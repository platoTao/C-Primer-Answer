#include<iostream>
#include<initializer_list>
using namespace std;

int Sum(initializer_list<int> li){
    int sum = 0;
    for(const auto i:li)
        sum += i;
    return sum;
}
int main(int argc,char **argv){

    int m = Sum({1,2,3,4,5,6,7,8,9});
    cout << m <<endl;
    return 0;

}
