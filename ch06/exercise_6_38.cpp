#include<iostream>
#include<string>

using namespace std;

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

int (&arrPtr(int i))[5]{
    return (i%2) ? odd : even;
}

int main(){

    int (&a)[5] = arrPtr(2);
    auto beg = begin(a),ends = end(a);
    while(beg!=ends){
        cout << *beg++ << " ";
    }
    return 0;
}
