#ifndef BULK_QUOTE_H_INCLUDED
#define BULK_QUOTE_H_INCLUDED
#include "Disc_quote.h"

class Bulk_quote : public Disc_quote
{
    friend std::ostream &operator <<(std::ostream&,Bulk_quote&);
public:
    Bulk_quote() {
//        std::cout << "default constructing Bulk_quote\n";
        }
    Bulk_quote(const std::string &book,double price,size_t qty,double disc):
        Disc_quote(book,price,qty,disc)
        {
//            std::cout << "Bulk_quote : constructor taking 4 parameters\n";
            }
    // copy constructor
	Bulk_quote(const Bulk_quote& bq) : Disc_quote(bq)
	{
//		std::cout << "Bulk_quote : copy constructor\n";
	}
		// move constructor
	Bulk_quote(Bulk_quote&& bq):Disc_quote(std::move(bq))
	{
//		std::cout << "Bulk_quote : move constructor\n";
	}

	// copy =()
	Bulk_quote& operator =(const Bulk_quote& rhs)
	{
		Disc_quote::operator =(rhs);
//		std::cout << "Bulk_quote : copy =()\n";

		return *this;
	}


	// move =()
	Bulk_quote& operator =(Bulk_quote&& rhs) noexcept
	{
		Disc_quote::operator =(std::move(rhs));
//		std::cout << "Bulk_quote : move =()\n";

		return *this;
	}

	Bulk_quote* clone() const & { return new Bulk_quote(*this); }

	Bulk_quote* clone() && { return new Bulk_quote(std::move(*this)); }

    double net_price(size_t) const override;

    ~Bulk_quote() override
	{
//		std::cout << "destructing Bulk_quote\n";
	}
};

double Bulk_quote::net_price(size_t cnt) const
{
    if (cnt >= quantity)
        return (1-discount) * cnt * price;
    else
        return cnt * price;

}

std::ostream &operator <<(std::ostream& os,Bulk_quote &bq)
{
//    os << "\tUsing operator <<(ostream&,Bulk_quote&);" << std::endl;
}
#endif // BULK_QUOTE_H_INCLUDED
