#ifndef EXERCISE_15_27_H_INCLUDED
#define EXERCISE_15_27_H_INCLUDED
#include "Disc_quote.h"

class Bulk_quote:public Disc_quote
{
public:
    using Disc_quote::Disc_quote;
    double net_price( size_t) const;
};

double Bulk_quote::net_price(size_t cnt) const
{
   if (cnt > quantity)
        return cnt * ( 1- discount ) * price;
   else
        return cnt * price;
}

#endif // EXERCISE_15_27_H_INCLUDED
