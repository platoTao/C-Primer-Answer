#ifndef EXERCISE_16_1_H_INCLUDED
#define EXERCISE_16_1_H_INCLUDED

template <typename T>
int compare(const T &v1,const T &v2)
{
    if(v1 < v2) return -1;
    if(v1 > v2) return 1;
    return 0;
}

#endif // EXERCISE_16_1_H_INCLUDED
