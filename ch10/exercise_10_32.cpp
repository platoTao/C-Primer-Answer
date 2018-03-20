#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include"Sales_item.h"


using namespace std;

int main()
{
    vector<Sales_item> Items;
    istream_iterator<Sales_item> iter(cin),eof;
    Sales_item total = *iter++;
    while(iter != eof)
    {
        Sales_item item = *iter++;
        if(item.isbn() == total.isbn())
            total += item;
        else
        {
            Items.push_back(total);
            total = item;
        }
    }
    Items.push_back(total);

    sort(Items.begin(),Items.end(),compareIsbn);
    auto beg = Items.begin();
    while(beg != Items.end())
    {
        auto end = find_if(beg,Items.end(),[beg](const Sales_item &item1)
                           { return item1.isbn() != beg->isbn(); } );
        cout << accumulate(beg,end,Sales_item(beg->isbn())) << endl;
        beg = end;
    }

    return 0;
}
