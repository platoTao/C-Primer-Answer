#ifndef EXERCISE_14_2_H_INCLUDED
#define EXERCISE_14_2_H_INCLUDED

#include<iostream>
#include<string>

class Sales_data
{
	friend std::istream& operator>>(std::istream&, Sales_data&); // input
	friend std::ostream& operator<<(std::ostream&, const Sales_data&); // output
	friend Sales_data operator+(const Sales_data&, const Sales_data&); // addition

public:
	Sales_data(const std::string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(n*p) {}
	Sales_data() : Sales_data("", 0, 0.0f) {}
	Sales_data(const std::string &s) : Sales_data(s, 0, 0.0f) {}
	Sales_data(std::istream &is);

	Sales_data& operator+=(const Sales_data&); // compound-assignment
	Sales_data& operator=(const std::string&);
	std::string isbn() const { return bookNo; }

private:
	inline double avg_price() const;

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

std::istream& operator>>(std::istream&, Sales_data&);
std::ostream& operator<<(std::ostream&, const Sales_data&);
Sales_data operator+(const Sales_data&, const Sales_data&);

Sales_data::Sales_data(std::istream &is) : Sales_data()
{
	is >> *this;
}

inline double Sales_data::avg_price() const
{
	return units_sold ? revenue / units_sold : 0;
}

std::istream& operator>>(std::istream &is, Sales_data &item)
{
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    if (is)
		item.revenue = price * item.units_sold;
	else
		item = Sales_data();
    return is;
}

std::ostream& operator<<(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data& Sales_data::operator+=(const Sales_data &item)
{
    this->units_sold += item.units_sold;
    this->revenue += item.revenue;
    return *this;
}

Sales_data& Sales_data::operator=(const std::string&);

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum += rhs;
    return sum;

}

#endif // EXERCISE_14_2_H_INCLUDED
