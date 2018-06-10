#ifndef EXERCISE_16_5_H_INCLUDED
#define EXERCISE_16_5_H_INCLUDED

#include<iostream>

template <typename T,unsigned N>
void print(const T (&a)[N])
{
    for(size_t i = 0 ; i < N;++i)
        std::cout << a[i] << " ";
}

#endif // EXERCISE_16_5_H_INCLUDED
