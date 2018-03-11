#include<iostream>
#include<string>

using namespace std;

int main(){

    string word,lastword;

    cin >> lastword;

    while(cin>>word){
        if(word==lastword&&word[0]<97&&word[0]>64)
            break;
        else
            lastword = word;
    }
    if(word!=lastword)
        cout << "There are no duplicated words " <<endl;
    else
        cout << "Duplicated word : " << word << endl;

    return 0;

}
