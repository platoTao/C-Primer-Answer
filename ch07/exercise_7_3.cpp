#include<iostream>
#include "exercise_7_2.h"

using namespace std;

int main(){

    Sales_data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_data trans;
        while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
            if(total.isbn() == trans.isbn()){
                total.combine(trans);
            }
            else{
                cout << total.bookNo << " " << total.units_sold << " "<< total.revenue << endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else{
        cout << "No more data?" << endl;
        return -1;
    }
    return 0;
}
