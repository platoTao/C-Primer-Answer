#include<string>

struct Person;
std::istream &read(std::istream &is,Person &p);

struct Person {

    Person() = default;
    Person(std::string &s1,std::string &s2):name(s1),address(s2) {}
    Person(std::istream &is){read(is,*this);}
    std::string get_name() const {return this->name;};
    std::string get_addr() const {return address;};
    std::string name;
    std::string address;
};

std::istream &read(std::istream &is,Person &p){
    is >> p.name >> p.address;
    return is;
}

std::ostream &print(std::ostream &os,const Person &p){
    os << p.get_name() << " " << p.get_addr();

    return os;
}
