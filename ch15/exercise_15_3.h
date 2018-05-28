#ifndef EXERCISE_15_3_H_INCLUDED
#define EXERCISE_15_3_H_INCLUDED

#include<iostream>
#include<string>

class Quote
{
    friend bool operator==(const Quote& ,const Quote&);
    friend bool operator!=(const Quote& ,const Quote&);
    friend std::ostream &operator <<(std::ostream&,Quote&);
public:
    Quote() {
        //std::cout << "default constructing Quote\n";
        };
    Quote(const std::string &book,double sales_price):
        bookNo(book),price(sales_price)
        {
//            std::cout << "Quote : constructor taking 2 parameters\n";
        }
    Quote(const Quote &);
    Quote(Quote&&) noexcept;
    Quote &operator=(const Quote&);
    Quote &operator=(Quote&&) noexcept;
    virtual Quote* clone() const & { return new Quote(*this); }
    virtual Quote* clone() && { return new Quote(std::move(*this)); }
    std::string isbn() const { return bookNo; }
    virtual double net_price(size_t n) const { return price * n; }
    virtual void debug() const;
    virtual ~Quote() {
//         std::cout << "destructing Quote\n";
         };
private:
    std::string bookNo;
protected:
    double price = 0.0;
};

double print_total(std::ostream &os,Quote &item,size_t n)
{
    auto ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due : "
    << ret << std::endl;
    return ret;
}

void Quote::debug() const
{
    std::cout << "bookNo: " << bookNo << " price: " << price << std::endl;
}

Quote::Quote(const Quote &item)
{
    this->bookNo = item.bookNo;
    this->price = item.price;
//    std::cout << "Quote: copy constructing\n";
}

Quote& Quote::operator=(const Quote &item)
{
    if(*this != item)
    {
        this->bookNo = item.bookNo;
        this->price = item.price;
    }
//    std::cout << "Quote: copy =() \n";
    return *this;
}

Quote::Quote(Quote &&rhs) noexcept
{
    this->bookNo = std::move(rhs.bookNo);
    this->price = std::move(rhs.price);
//    std::cout << "Quote: move constructing\n";
}

Quote& Quote::operator=(Quote &&rhs) noexcept
{
    if(*this != rhs)
    {
        this->bookNo = rhs.bookNo;
        this->price = rhs.price;
    }
//    std::cout << "Quote: move =\n";
    return *this;
}

bool operator==(const Quote &lhs ,const Quote &rhs)
{
    return lhs.bookNo==rhs.bookNo;
}

bool operator!=(const Quote &lhs ,const Quote &rhs)
{
    return !(lhs==rhs);
}

std::ostream &operator <<(std::ostream &os,Quote &e)
{
//    os << "\tUsing operator <<(ostream&,Quote&);" << std::endl;
}

#endif // EXERCISE_15_3_H_INCLUDED
