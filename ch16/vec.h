#ifndef VEC_H_INCLUDED
#define VEC_H_INCLUDED

#include<utility>
#include<memory>
#include<initializer_list>

template <typename T>
class Vec
{
public:
    Vec():elements(nullptr),first_free(nullptr),cap(nullptr) {}
    Vec(std::initializer_list<T> il);
    Vec(const Vec&);
    Vec& operator=(const Vec&);

    void push_back(const T&);
    T* begin() const { return elements; }
    T* end() const { return first_free; }
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap-elements; }
    ~Vec();
private:
    std::allocator<T> alloc;
    void chk_n_alloc();
    void free();
    void reallocate();
    std::pair<T*,T*> alloc_n_copy(const T*,const T*);
    T* elements;
    T* first_free;
    T* cap;
};

template <typename T>
Vec<T>::Vec(std::initializer_list<T> il)
{
    auto data = alloc_n_copy(il.begin(),il.end());
    elements = data.first;
    cap = first_free = data.second;
}

template <typename T>
Vec<T>::Vec(const Vec &v)
{
    auto data = alloc_n_copy(v.begin(),v.end());
    elements = data.first;
    cap = first_free = data.second;
}

template <typename T>
Vec<T>& Vec<T>::operator=(const Vec &v)
{
    auto data = alloc_n_copy(v.begin(),v.end());
    free();
    elements = data.first;
    cap = first_free = data.second;
    return *this;
}

template <typename T>
void Vec<T>::chk_n_alloc()
{
    if(size() == capacity())
        reallocate();
}

template <typename T>
std::pair<T*,T*> Vec<T>::alloc_n_copy(const T* b,const T* e)
{
    auto data = alloc.allocate(e-b);
    return {data,uninitialized_copy(b,e,data)};
}

template <typename T>
void Vec<T>::reallocate()
{
    auto newcap = size()? 2 * size() : 1;
    auto newdata = alloc.allocate(newcap);
    auto dest = newdata;
    auto elem = elements;
    for(size_t i = 0 ; i < size();++i)
        alloc.construct(dest++,std::move(*elem++));
    free();
    elements = newdata;
    first_free = dest;
    cap = elements + newcap;
}

template <typename T>
void Vec<T>::free()
{
    if(elements)
    {
        for(auto p = first_free; p != elements;)
            alloc.destroy(--p);
        alloc.deallocate(elements,cap-elements);
    }
    elements = first_free = cap = nullptr;
}

template <typename T>
Vec<T>::~Vec()
{
    free();
}

template <typename T>
void Vec<T>::push_back(const T& t)
{
    chk_n_alloc();
    alloc.construct(first_free++,t);
}

#endif // VEC_H_INCLUDED
