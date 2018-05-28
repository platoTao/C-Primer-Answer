#ifndef EXERCISE_15_7_H_INCLUDED
#define EXERCISE_15_7_H_INCLUDED

#include "exercise_15_3.h"

class Bulk_quote : public Quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &book,double p,size_t max_qty,size_t min_qty,double disc):
        Quote(book,p),max_qty(max_qty),min_qty(min_qty),discount(disc) {}
    double net_price(size_t) const override;
private:
    size_t max_qty;
    size_t min_qty;
    double discount;
};

double Bulk_quote::net_price(size_t n) const
{
    double temp;
    if (n >= min_qty && n < max_qty)
        return (1-discount) * n * price;
    else if (n > max_qty)
        return (n - max_qty) * price + (1-discount) * max_qty * price;
    else
        return n * price;

}



#endif // EXERCISE_15_7_H_INCLUDED
