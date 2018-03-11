#include<iostream>

using namespace std;

int main(){

    int ffCnt = 0,flCnt = 0,fiCnt = 0;
    char ch,nch;
    cin>>nch;
    while(cin>>noskipws>>ch){

            if(nch=='f'){
                switch(ch){
                    case 'f':
                        ++ffCnt;
                        break;
                    case 'i':
                        ++fiCnt;
                        break;
                    case 'l':
                        ++flCnt;
                        break;
                        }
            }
            nch = ch;
    }
    cout << "Number of ff sequence : " << ffCnt <<endl;
    cout << "Number of fl sequence : " << flCnt <<endl;
    cout << "Number of fi sequence : " << fiCnt <<endl;

    return 0;

}
