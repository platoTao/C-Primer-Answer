#include<iostream>
#include<algorithm>
#include<string>
#include"exercise_7_26.h"
#include<vector>

using namespace std;

bool compareIsbn(const Sales_data &item1,const Sales_data &item2)
{
    return item1.isbn().size() < item2.isbn().size();
}

int main()
{   Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
	vector<Sales_data> v{ d1, d2, d3, d4, d5 };
	sort(v.begin(),v.end(),compareIsbn);
	for(const auto &i:v)
        cout << i.isbn() << " ";
    return 0;
}
