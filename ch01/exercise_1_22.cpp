#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){

    Sales_item total,item;

    cin >> total;

    while(cin>>item&&compareIsbn(total,item))
        total += item;

    cout << total;

    return 0;
}
