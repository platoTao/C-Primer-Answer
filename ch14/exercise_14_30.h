#ifndef EXERCISE_14_30_H_INCLUDED
#define EXERCISE_14_30_H_INCLUDED

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


class StrBlobPtr
{
public:
    StrBlobPtr(): curr(0) {}
    StrBlobPtr(StrBlob &a,size_t sz = 0):
        wptr(a.data),curr(sz) {}
    string& operator*() const
    {
        auto p = check(curr,"dereference past end");
        return (*p)[curr];
    }

    string* operator->() const
    {
        return &(this->operator*());
    }
    bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }
    string& derf() const;
    StrBlobPtr& incr();
private:
    shared_ptr<vector<string>> check(size_t,const string&) const;
    weak_ptr<vector<string>> wptr;
    size_t curr;

};


#endif // EXERCISE_14_30_H_INCLUDED
