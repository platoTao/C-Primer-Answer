#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

int main()
{
    multimap<string,string> books
    {
        { "tao", "bbb" },
		{ "wang", "aaa" },
		{ "tao", "ccc" },
		{ "wang", "ttt" },
		{ "wang", "eee" },
		{ "wang", "sss" }
    };
    string author = "tao";
    string book = "ccc";
    auto res = books.find(author);
    auto count = books.count(author);
    while(count)
    {
        cout << "the author: " << res->first << " " <<
         "the book " << res->second << endl;
        if(res->second == book)
            books.erase(res);
        --count;
        ++res;
    }
    for(const auto i:books)
        cout << i.first << " " << i.second << endl;
    return 0;
}
