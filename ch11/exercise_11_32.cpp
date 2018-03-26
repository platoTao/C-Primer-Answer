#include<iostream>
#include<string>
#include<map>
#include<set>

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

    map<string,multiset<string> > new_books;
    for(const auto i:books)
    {
        new_books[i.first].insert(i.second);
    }

    for (const auto &author : new_books)
	{
		std::cout << author.first << ": ";
		for (const auto &book : author.second)
			std::cout << book << " ";
		std::cout << std::endl;
	}
    return 0;
}
