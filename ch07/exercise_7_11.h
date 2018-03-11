#include<string>
using std::istream;using std::ostream;
struct Sales_data {
    Sales_data()=default;
    Sales_data(const std::string &s):bookNo(s) {}
    Sales_data(const std::string &s,unsigned double n,double p):bookNo(s),units_sold(n),revenue(p*n) {}
    std::string isbn() const {return this->bookNo;}
    double avg_price() const { return this->revenue / this->units_sold;}
    Sales_data& combine(const Sales_data&);
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read(istream& is,Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

ostream &print(ostream &os,const Sales_data &item){
    os << item.bookNo << " " <<item.units_sold << " " << item.revenue
    << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

Sales_data::Sales_data(istream &is){
    read(id,*this);
}
