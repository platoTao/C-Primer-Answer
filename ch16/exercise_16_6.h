#ifndef EXERCISE_16_6_H_INCLUDED
#define EXERCISE_16_6_H_INCLUDED

template <typename T,unsigned N>
T* begin(const T (&arr)[N])
{
    return arr;
}

template <typename T,unsigned N>
T* end(const T (&arr)[N])
{
    return arr+N;
}

#endif // EXERCISE_16_6_H_INCLUDED
