#include"Bulk_quote.h"
#include<vector>
#include<memory>

using namespace std;

int main()
{
    vector<Quote> basket;
    for(int i = 1;i < 10 ;++i)
        basket.push_back(Bulk_quote("x",i+10,20,0.1));
    double total = 0;
    for(auto p = basket.cbegin();p!=basket.cend();++p)
    {
        total += p->net_price(30);
    }
    cout << total << endl;
    cout << "===============================================" << endl;
    vector<shared_ptr<Quote>> pbasket;
    for(int i = 1;i < 10 ;++i)
        pbasket.push_back(make_shared<Bulk_quote>("x",i+10,20,0.1));
    total = 0;
    for(auto p = pbasket.cbegin();p!=pbasket.cend();++p)
    {
        total += (*p)->net_price(30);
    }
    cout << total << endl;
}
