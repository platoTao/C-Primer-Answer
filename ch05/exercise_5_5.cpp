#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    vector<string> scores{"F","D","C","B","A","A++"};
    double grade;
    while(cin>>grade){

        string lettergrade;
        if(grade<=100){
            if(grade<60){
                lettergrade = scores[0];
            }
            else{
                lettergrade = scores[(static_cast<int>(grade-50)/10)];
                if(static_cast<int>(grade)%10>7){
                    lettergrade += "+";
                }
                else if(static_cast<int>(grade)%10<3&&grade!=100){
                    lettergrade += "-";
                }
            }
        }
        cout << lettergrade << endl;
    }
    return 0;

}
