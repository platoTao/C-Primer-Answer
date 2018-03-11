#include<string>

using std::istream;using std::ostream;using std::string;
class Person;
istream &read(istream &is,Person &p);

class Person {

    friend istream &read(istream&,Person&);
    friend ostream &print(ostream&,const Person&);

    public:
    Person() = default;
    Person(string &s1,string &s2):name(s1),address(s2) {}
    Person(istream &is){read(is,*this);}
    string get_name() const {return this->name;};
    string get_addr() const {return address;};

    private:
    string name;
    string address;
};

istream &read(istream &is,Person &p){
    is >> p.name >> p.address;
    return is;
}

ostream &print(ostream &os,const Person &p){
    os << p.get_name() << " " << p.get_addr();

    return os;
}
