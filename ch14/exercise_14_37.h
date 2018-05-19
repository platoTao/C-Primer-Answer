#ifndef EXERCISE_14_37_H_INCLUDED
#define EXERCISE_14_37_H_INCLUDED

class Intcompare
{
public:
    Intcompare(int v): val(v) {}
    bool operator()(int v) const { return val == v ; }
private:
    int val;
};

#endif // EXERCISE_14_37_H_INCLUDED
