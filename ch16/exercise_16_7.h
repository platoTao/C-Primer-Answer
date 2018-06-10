#ifndef EXERCISE_16_7_H_INCLUDED
#define EXERCISE_16_7_H_INCLUDED

template<typename T, int N>
constexpr int length(const T(&ary)[N])
{
    return N;
}

#endif // EXERCISE_16_7_H_INCLUDED
