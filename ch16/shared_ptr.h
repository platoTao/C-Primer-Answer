#ifndef SHARED_PTR_H_INCLUDED
#define SHARED_PTR_H_INCLUDED
#include<iostream>
#include<utility>

template <typename T>
class SP
{
public:
    SP():p(nullptr),use(nullptr) {}
    SP(T* t): p(t),use(new size_t(1)) {}
    SP(const SP&);
    SP& operator=(const SP&);
    T& operator*() { return *p; }
    T& operator*() const { return *p;}
    ~SP();
private:
    T* p;
    size_t *use;
};

template <typename T>
SP<T>::SP(const SP& pt):p(pt.p),use(pt.use)
{
    if(use)++*use;
}

template <typename T>
SP<T>& SP<T>::operator=(const SP& rhs)
{
    if( rhs.use )++*rhs.use;
    if( use && --*use == 0){
        delete p;
        delete use;
    }
    p = rhs.p;
    use = rhs.use;
    return *this;
}

template <typename T>
SP<T>::~SP()
{
    if(use && --*use == 0){
        delete p;
        delete use;
    }
}

//exercise_16_61.cpp
template <template T,typename... Args>
SP<T> make_SP(Args&& ...args)
{
    return SP<T>(new T(std::forward<Args>(args)...));
}
#endif // SHARED_PTR_H_INCLUDED
