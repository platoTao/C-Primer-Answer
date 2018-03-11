#include<iostream>
#include "exercise_7_12.h"

using namespace std;

int main(){

    Sales_data total(cin);
    if(!total.isbn().empty()){
        istream &is = cin;
        while(is){
            Sales_data trans(is);
            if(total.isbn() == trans.isbn()){
                total = add(total,trans);
            }
            else{
                print(cout,total);
                cout << endl;
                //total.copy(trans);
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
