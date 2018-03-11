#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    vector<string> scores{"F","D","C","B","A","A++"};
    int grade;
    while(cin>>grade){

        string lettergrade;
        lettergrade = grade>100?"Wrong grade .":grade<60?scores[0]:(grade%10>7)?scores[(grade-50)/10]+"+":(grade!=100&&grade%10<3)?scores[(grade-50)/10]+"-":scores[(grade-50)/10];
        cout << lettergrade << endl;

    }
    return 0;

}
