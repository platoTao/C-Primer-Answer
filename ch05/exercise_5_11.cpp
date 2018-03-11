#include<iostream>

using namespace std;

int main(){

    int aCnt = 0,oCnt = 0,eCnt = 0,iCnt = 0,uCnt = 0;
    int spaCnt = 0,EnCnt = 0,TabCnt = 0;
    char ch;

    while(cin>>noskipws>>ch){

        switch(ch){

        case 'a': case 'A':
            ++aCnt;
            break;
        case 'e': case 'E':
            ++eCnt;
            break;
        case 'i': case 'I':
            ++iCnt;
            break;
        case 'o': case 'O':
            ++oCnt;
            break;
        case 'u': case 'U':
            ++uCnt;
            break;
        case ' ':
            ++spaCnt;
            break;
        case '\t':
            ++TabCnt;
            break;
        case '\n':
            ++EnCnt;
            break;
        default:
            ;
        }
    }
    cout << "Number of vowel a : " << aCnt <<endl;
    cout << "Number of vowel e : " << eCnt <<endl;
    cout << "Number of vowel i : " << iCnt <<endl;
    cout << "Number of vowel o : " << oCnt <<endl;
    cout << "Number of vowel u : " << uCnt <<endl;
    cout << "Number of space :   " << spaCnt <<endl;
    cout << "Number of Tab :     " << TabCnt <<endl;
    cout << "Number of Enter :   " << EnCnt <<endl;
    return 0;

}
