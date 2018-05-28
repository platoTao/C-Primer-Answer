#ifndef EXERCISE_15_16_H_INCLUDED
#define EXERCISE_15_16_H_INCLUDED

#include "Disc_quote.h"

class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &book,double p,size_t max_qty,size_t min_qty,double disc):
        Disc_quote(book,p,min_qty,disc),max_qty(max_qty) {}
    double net_price(size_t) const override;
private:
    size_t max_qty;
};

double Bulk_quote::net_price(size_t cnt) const
{
    double temp;
    if (cnt >= quantity && cnt < max_qty)
        return (1-discount) * cnt * price;
    else if (cnt > max_qty)
        return (cnt - max_qty) * price + (1-discount) * max_qty * price;
    else
        return cnt * price;

}

#endif // EXERCISE_15_16_H_INCLUDED
