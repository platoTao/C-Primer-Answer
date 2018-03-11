#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v1;
    int number;
    cout << "Input the numbers:" << endl;
    while(cin>>number)
        v1.push_back(number);
    int m = 0;
    auto beg = v1.begin();
    auto ed = v1.end()-1;
    while(1){
        m = *beg + *ed;
        cout << m << endl;
        if(ed-beg<=1)break;
        ed -= 1;
        beg += 1;
    }
    return 0;
}
