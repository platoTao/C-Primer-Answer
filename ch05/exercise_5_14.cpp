#include<iostream>
#include<string>

using namespace std;

int main(){

    string word,lastword,mostWord;
    int wCnt=1,mostCnt=1;
    cin >> lastword;

    while(cin>>word){
        if(word==lastword){
            ++wCnt;
            if(wCnt>mostCnt){
                mostWord = word;
                mostCnt = wCnt;
            }
        }
        else{
            lastword = word;
        }
    }
    if(mostCnt==1)
        cout << "There are no duplicated words " <<endl;
    else
        cout << mostWord << " : " << mostCnt << endl;

    return 0;

}
