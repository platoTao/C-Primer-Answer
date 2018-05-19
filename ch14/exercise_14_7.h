#ifndef EXERCISE_14_7_H_INCLUDED
#define EXERCISE_14_7_H_INCLUDED

#include<iostream>
#include<memory>

using std::allocator;
using std::pair;
using std::cout;
class String
{
    friend void print(const String&);
    friend std::ostream& operator<<(ostream&,const String&);
public:
    String():
        elem(nullptr),first_free(nullptr),cap(nullptr) { }
    String(char*);
    String(const String&);
    String &operator=(const String&);
    // exercise_13_49
    String(String &&);
    String &operator=(String &&);

    ~String();
    size_t size() const {return first_free - elem ; }
    size_t capacity() const { return cap - elem ; }
    char *begin() const { return elem ; }
    char *end() const { return first_free ; }
private:
    allocator<char> alloc;
    char *elem;
    char *first_free;
    char *cap;
    pair<char*,char*> alloc_n_copy(const char*,const char*);
    void reallocate();
    void check();
    void free();
    void push_back(const char&);

};

void String::check()
{
    if(size()==capacity())
        reallocate();
}

pair<char*,char*> String::alloc_n_copy(const char *b,const char *e)
{
    auto data = alloc.allocate(e-b);
    return {data,std::uninitialized_copy(b,e,data)};
}

void String::free()
{
    if(elem)
    {
        for(auto p = first_free;p != elem;)
            alloc.destroy(--p);
        alloc.deallocate(elem,cap - elem);
    }
}

String::~String()
{
    free();
}

String::String(char* s):
    elem(nullptr),first_free(nullptr),cap(nullptr)
{

    char* b= s;
    while(*b != '\0')
        push_back(*b++);
}

String::String(const String &s)
{
    cout << "call of constructor of copy" << std::endl;
    auto data = alloc_n_copy(s.begin(),s.end());
    elem = data.first;
    cap = first_free = data.second;
}

String &String::operator=(const String &s)
{
    cout << "call of operator= " << std::endl;
    auto newdata = alloc_n_copy(s.begin(),s.end());
    free();
    elem = newdata.first;
    cap = first_free = newdata.second;
    return *this;
}
void String::push_back(const char& c)
{
    check();
    alloc.construct(first_free++,c);
}
void String::reallocate()
{
    auto newcapacity = size() ? 2 * size() : 1;
    auto data = alloc.allocate(newcapacity);
    auto dest = data;
    auto e = elem;
    for(size_t i = 0;i != size() ;++i)
        alloc.construct(dest++,*e++);
    free();
    elem = data;
    first_free = dest;
    cap = elem + newcapacity;
}

void print(const String&);

String::String(String &&s)
{
    elem = s.elem;
    first_free = s.first_free;
    cap = s.cap;
    s.elem = s.first_free = s.cap = nullptr;
}

String &String::operator=(String &&rhs)
{
    if(this != &rhs)
    {
        free();
        elem = rhs.elem;
        first_free = rhs.first_free;
        cap = rhs.cap;
        rhs.elem = rhs.first_free = rhs.cap = nullptr;
    }
}

std::ostream& operator<<(ostream&,const String&);

#endif // EXERCISE_14_7_H_INCLUDED
