#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<exception>

using namespace std;
class StrBlobPtr;

class StrBlob
{
public:
    friend class StrBlobPtr;
    StrBlobPtr begin();
    StrBlobPtr end();
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);
    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}

    void push_back(const std::string &t) { data->push_back(t);}
    void pop_back();

    std::string& front();
    const std::string& front() const;
    std::string& back();
    const std::string& back() const;

private:
    std::shared_ptr<std::vector<std::string> > data;
    void check(size_type i,const std::string &msg) const;
};

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

class StrBlobPtr
{
public:
    StrBlobPtr(): curr(0) {}
    StrBlobPtr(StrBlob &a,size_t sz = 0):
        wptr(a.data),curr(sz) {}
    bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }
    string& derf() const;
    StrBlobPtr& incr();
private:
    shared_ptr<vector<string>> check(size_t,const string&) const;
    weak_ptr<vector<string>> wptr;
    size_t curr;

};

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
