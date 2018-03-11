#include<string>

struct Person {

    std::string get_name() const {return this->name;};
    std::string get_addr() const {return address;};
    std::string name;
    std::string address;
};
