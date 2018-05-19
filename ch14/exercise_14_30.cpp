#include "exercise_14_30.h"

StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> il): data(std::make_shared<std::vector<std::string>>(il)) {}

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

shared_ptr<vector<string>> StrBlobPtr::check(size_t i,const string &msg) const
{
    auto ret = wptr.lock();
    if(!ret)
        throw runtime_error("unbound StrBlobPtr");
    if(i > ret->size())
        throw out_of_range(msg);
    return ret;
}

string& StrBlobPtr::derf() const
{
    auto p = check(curr,"dereference past end");
    return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr()
{
    check(curr,"increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

StrBlobPtr StrBlob::begin() {return StrBlobPtr(*this);}
StrBlobPtr StrBlob::end() {return StrBlobPtr(*this,data->size());}
