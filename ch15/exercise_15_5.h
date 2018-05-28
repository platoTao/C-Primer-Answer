#ifndef EXERCISE_15_5_H_INCLUDED
#define EXERCISE_15_5_H_INCLUDED

#include "exercise_15_3.h"

class Bulk_quote : public Quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &book,double p,size_t qty,double disc):
        Quote(book,p),min_qty(qty),discount(disc) {}
    double net_price(size_t) const override;
    void debug() const override;
private:
    size_t min_qty;
    double discount;
};

double Bulk_quote::net_price(size_t n) const
{
    if (n >= min_qty)
        return (1-discount) * n * price;
    else
        return n * price;

}

void Bulk_quote::debug() const
{
    std::cout << " price: " << price
    << " min_qty: " << min_qty << " discount:" << discount << std::endl;
}

#endif // EXERCISE_15_5_H_INCLUDED
