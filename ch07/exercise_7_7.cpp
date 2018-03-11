#include<iostream>
#include "exercise_7_6.h"

using namespace std;

int main(){

    Sales_data total;
    if(read(cin,total)){
        Sales_data trans;
        while(read(cin,trans)){
            if(total.isbn() == trans.isbn()){
                total = add(total,trans);
            }
            else{
                print(cout,total);
                cout << endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        print(cout,total);
        cout << endl;
    }
    else{
        cout << "No more data?" << endl;
        return -1;
    }
    return 0;
}
