#ifndef EXERCISE_14_35_H_INCLUDED
#define EXERCISE_14_35_H_INCLUDED

#include<iostream>
using namespace std;

class ReadString
{
public:
    ReadString(istream &is = cin): in(is) {}
    string operator()()
    {
        string line;
        if(!getline(in,line))
            line = ' ';
        return line;
    }
private:
    istream &in;

};

#endif // EXERCISE_14_35_H_INCLUDED
