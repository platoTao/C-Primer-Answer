#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<fstream>
#include<sstream>
#include<memory>

using namespace std;
using line_no = vector<string>::size_type;

int main()
{
    vector<string> file;
    map<string,shared_ptr<set<line_no>>> vm;
    ifstream f("text.txt");
    string text;
    while(getline(f,text))
    {
        file.push_back(text);
        int n = file.size() - 1;
        istringstream line(text);
        string word;
        while(line >> word)
        {
            auto &loc = vm[word];
            if(!loc)
                loc.reset(new set<line_no>);
            loc->insert(n);

        }
    }

    while(1)
    {
        cout << "Enter the word or q to leave: " << endl;
        string word;
        cin >> word;
        if(word=="q")
            break;
        auto loc = vm.find(word);
        if(loc == vm.end())
        {
            cout << "Sorry,we not find this word.Please continue." << endl;
            continue;
        }
        auto ptr = (*loc).second;
        cout << word << " occurs " << ptr->size() << " times " << endl;
        for(auto num : *ptr)
        {
            cout << num + 1 << " : " << file[num] << endl;
        }
    }

}
