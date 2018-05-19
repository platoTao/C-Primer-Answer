#ifndef EXERCISE_14_16_H_INCLUDED
#define EXERCISE_14_16_H_INCLUDED

#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<exception>


class StrBlob
{
    friend bool operator==(const StrBlob&,const StrBlob&);
    friend bool operator!=(const StrBlob&,const StrBlob&);
    friend bool operator>(const StrBlob&,const StrBlob&);
    friend bool operator<(const StrBlob&,const StrBlob&);
    friend bool operator>=(const StrBlob&,const StrBlob&);
    friend bool operator<=(const StrBlob&,const StrBlob&);

public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob(): data(std::make_shared<std::vector<std::string>>()) {}
    StrBlob(std::initializer_list<std::string> il): data(std::make_shared<std::vector<std::string>>(il)) {}
    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}

    void push_back(const std::string &t) { data->push_back(t);}
    void pop_back();

    std::string& front();
    const std::string& front() const;
    std::string& back();
    const std::string& back() const;
    std::string& operator[](std::size_t);
    const std::string& operator[](std::size_t) const;
private:
    std::shared_ptr<std::vector<std::string> > data;
    void check(size_type i,const std::string &msg) const;
};

bool operator==(const StrBlob&,const StrBlob&);
bool operator!=(const StrBlob&,const StrBlob&);
bool operator>(const StrBlob&,const StrBlob&);
bool operator<(const StrBlob&,const StrBlob&);
bool operator>=(const StrBlob&,const StrBlob&);
bool operator<=(const StrBlob&,const StrBlob&);


#endif // EXERCISE_14_16_H_INCLUDED
