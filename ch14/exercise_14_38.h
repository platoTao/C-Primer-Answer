#ifndef EXERCISE_14_38_H_INCLUDED
#define EXERCISE_14_38_H_INCLUDED

#include<string>
#include<algorithm>
#include<iostream>

class StrLenIs
{
public:
    StrLenIs(std::size_t s) : len(s) {}
    bool operator()(const std::string &str)
    {
        return len == str.size();
    }

private:
    std::size_t len;
};

#endif // EXERCISE_14_38_H_INCLUDED
