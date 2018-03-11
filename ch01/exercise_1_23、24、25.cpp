#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){

    Sales_item total,item;
    int cnt = 1;
    if(cin >> total){
        while(cin>>item){
            if(compareIsbn(total,item)){
                total += item;
                ++cnt;

            }else{
                cout << "the sale record of "<< total.isbn() << " has " << cnt << " times " << endl;
                cout << "the sale record of "<< total.isbn() << " is: " << total << endl;
                total = item;
                cnt = 1;
            }/* end else */
        }/* end while*/
        cout << "the sale record of "<< total.isbn() << " has " << cnt << " times " << endl;
        cout << "the sale record of "<< total.isbn() << " is: " << total << endl;

    }else{
        cerr << "No data ?" << endl;
        return -1;
    }
    return 0;
}
