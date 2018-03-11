#include<iostream>

using namespace std;

int main(){

    int a,b;
    while(cin>>a>>b){
        try{
            if(b==0)
                throw runtime_error("division by zero.");
            cout << a/b << endl;
        }catch(runtime_error err){
            cout << err.what()<< endl << "Try again ? enter y / n ." << endl;
            char c;
            cin >>c;
            if(!cin||c=='n')break;

        }
    }
    return 0;

}
