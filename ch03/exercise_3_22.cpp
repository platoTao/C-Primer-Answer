#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    vector<string> text;
	text.push_back("aaaaaaaaaa aaaaaaaaa aaaaaa");
	text.push_back("");
	text.push_back("bbbbbbbbbbbbbb bbbbbbbbbbb bbbbbbbbbbbbb");
    for(auto i = text.begin();i!=text.end()&&(!i->empty());i++){
        for(auto &j:*i){
            if(isalpha(j))
                j = toupper(j);
        }
    }
    for(auto i:text)cout<<i<<endl;
    return 0;
}
