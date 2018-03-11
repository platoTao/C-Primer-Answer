#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){

    Sales_item item1,item2;
    while(cin >> item1 >> item2){
        if(item1.isbn()==item2.isbn()){
            cout << item1 + item2 <<endl;
        }else{

            cout << "Not same ISBN,please try again" <<endl;
        }
    }
    return 0;

}
