#ifndef EXERCISE_16_4_H_INCLUDED
#define EXERCISE_16_4_H_INCLUDED

template <typename Iterator,typename Value>
Iterator find(Iterator first,Iterator last,const Value &val)
{
    for( ; first != last && *first != val ; ++first);
    return first;
}

#endif // EXERCISE_16_4_H_INCLUDED
