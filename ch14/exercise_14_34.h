#ifndef EXERCISE_14_34_H_INCLUDED
#define EXERCISE_14_34_H_INCLUDED

class IfElseThen
{
public:
    IfElseThen() {}
    int operator()(int v,int a,int b)
    {
        return v ? a : b ;
    }
};


#endif // EXERCISE_14_34_H_INCLUDED
