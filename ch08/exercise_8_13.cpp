#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;

};

int main()
{
    string line,word;
    vector<PersonInfo> people;
    istringstream record;
    ifstream in("personinfo.txt");
    while(getline(in,line)){

        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;

        while(record >>word)
            info.phones.push_back(word);
        people.push_back(info);

    }
    for(auto i:people){
        cout << i.name << i.phones[0] << endl;
    }
    return 0;
}
