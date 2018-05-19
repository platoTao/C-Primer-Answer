#include "exercise_14_5.h"

ostream& operator<<(ostream &os,const Book &book)
{
    const char *seq = " ";
    os << book.isbn << seq << book.author << seq << book.pudate;
    return os;
}

istream& operator>>(istream &is,Book &book)
{
    is >> book.isbn >> book.author >> book.pudate;
    return is;
}

bool operator==(const Book &lhs,const Book &rhs)
{
    return (lhs.isbn == rhs.isbn);
}
bool operator!=(const Book &lhs,const Book &rhs)
{
    return !(lhs == rhs);
}

bool operator<(const Book &lhs,const Book &rhs)
{
    return lhs.isbn < rhs.isbn;
}

bool operator>(const Book &lhs,const Book &rhs)
{
    return !(lhs<rhs);
}
