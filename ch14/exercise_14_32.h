#ifndef EXERCISE_14_32_H_INCLUDED
#define EXERCISE_14_32_H_INCLUDED
#include"exercise_14_30.h"
#include"exercise_14_30.cpp"

class A
{
public:
    A():p(nullptr){}
    A(StrBlobPtr* p):ptr(p){}
    StrBlobPtr *operator->() const
    {
        // StrBlobPtr has its ->() function;
        return ptr->opeartor->();
    }
private:
    StrBlobPtr *ptr;
};

#endif // EXERCISE_14_32_H_INCLUDED
