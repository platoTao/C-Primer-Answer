#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<fstream>

using namespace std;

int main()
{
    vector<string> str;
    ifstream in("words.txt");
    istream_iterator<string> iter_input(in),eof;

    copy(iter_input,eof,inserter(str,str.begin()));
    ostream_iterator<string> out(cout," ");
    copy(str.begin(),str.end(),out);
    return 0;
}
