#include<fstream>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

void save(vector<string> &v1){
    string str1,str2;
    ifstream is;
    if(is)
        is.open("words.txt",ios::in);
    while(!is.eof()){
        getline(is,str1);
        v1.push_back(str1);
    }


}

int main(){
    vector<string> v1;
    save(v1);

    for(auto i:v1)
        cout << i << endl;
    return 0;
}
