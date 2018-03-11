#include<iostream>
#include<string>
#include <sstream>
using std::istream;using std::ostream;
using std::string;

istream &read_print(istream &is){
    auto old_state = is.rdstate();
    is.clear();
    string str;
    while(is >> str){
        std::cout << str <<std::endl;
    }
    is.setstate(old_state);

    return is;

}

int main(){

    std::istringstream record(string("Hello,world"));
    istream &is = read_print(record);
    std::cout << is.rdstate() << std::endl;
    return 0;

}
