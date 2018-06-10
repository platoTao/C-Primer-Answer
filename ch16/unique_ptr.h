#ifndef UNIQUE_PTR_H_INCLUDED
#define UNIQUE_PTR_H_INCLUDED
#include "debugdelete.h"

template <typename T,typename D = DebugDelete>
class UP
{
public:
    UP():p(nullptr) {}
    UP(T* t):p(t) {}
    UP(const UP&) = delete;
    UP& operator=(const UP&) = delete;
    T& operator*() { return *p;}
    const T& operator*() const { return *p;}
    void reset() noexcept{ d(p); p = nullptr; }
	void reset(T* t) noexcept{ d(p); p = t; }
	T* release();
    ~UP() { d(p); }
private:
    T* p;
    D d = D();
};

template <typename T,typename D>
T* UP<T,D>::release()
{
    T* t = p;
    p = nullptr;
    return t;
}
#endif // UNIQUE_PTR_H_INCLUDED
