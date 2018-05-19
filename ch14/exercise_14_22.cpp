#include "exercise_14_2.h"
Sales_data& Sales_data::operator=(const std::string &isbn)
{
    this->bookNo = isbn;
    return *this;
}
