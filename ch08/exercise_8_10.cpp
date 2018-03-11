#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

void save(vector<string> &v1){
    string str1,str2;
    ifstream is;
    if(is)
        is.open("words.txt");
    while(!is.eof()){
        getline(is,str1);
        v1.push_back(str1);
    }


}

int main(){
    vector<string> v1;
    save(v1);
    for(auto ptr = begin(v1);ptr != end(v1);ptr++)
    {
        istringstream scan(*ptr);
        string word;
        while(scan >> word)
            cout << word <<endl;
    }
    return 0;
}
