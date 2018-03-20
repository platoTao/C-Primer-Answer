#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    ifstream in("words.txt");
    string s1("bdh");
    string s2("pg");
    string word,longest_word;
    string::size_type pos = 0;
    while(in >> word)
    {
        if((pos = word.find_first_of(s1))!=string::npos &&
           (pos = word.find_first_of(s2))!=string::npos && word.size()>longest_word.size())
            longest_word = word;
    }
    cout << longest_word <<endl;
    return 0;
}
