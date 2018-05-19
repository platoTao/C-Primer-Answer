#include "exercise_14_16.h"

void StrBlob::check(size_type i,const std::string &msg) const
{
    if( i > data->size())
        throw std::out_of_range(msg);
}

std::string& StrBlob::front()
{
    check(0,"front on empty StrBlob");
    return data->front();
}

const std::string& StrBlob::front() const
{
    check(0,"front on empty StrBlob");
    return data->front();
}


std::string& StrBlob::back()
{
    check(0,"back on empty StrBlob");
    return data->back();
}

const std::string& StrBlob::back() const
{
    check(0,"back on empty StrBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0,"pop_back on empty StrBlob");
    return data->pop_back();
}

bool operator==(const StrBlob &lhs,const StrBlob &rhs)
{
    return lhs.data == rhs.data;
}

bool operator!=(const StrBlob &lhs,const StrBlob &rhs)
{
    return !(lhs==rhs);
}

bool operator>(const StrBlob &lhs,const StrBlob &rhs)
{
    return *lhs.data > *rhs.data;
}

bool operator<(const StrBlob &lhs,const StrBlob &rhs)
{
    return *lhs.data < *rhs.data;
}

bool operator>=(const StrBlob &lhs,const StrBlob &rhs)
{
    return *lhs.data >= *rhs.data;
}
bool operator<=(const StrBlob &lhs,const StrBlob &rhs)
{
    return *lhs.data <= *rhs.data;
}

std::string& StrBlob::operator[](std::size_t n)
{
    return (*data)[n];
}

const std::string& StrBlob::operator[](std::size_t n) const
{
    return (*data)[n];
}
