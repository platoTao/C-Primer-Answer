#ifndef EXERCISE_14_5_H_INCLUDED
#define EXERCISE_14_5_H_INCLUDED

#include<string>
#include<iostream>

using namespace std;

class Book
{
    friend istream& operator>>(istream&,Book&);
    friend ostream& operator<<(ostream&,const Book&);
    friend bool operator==(const Book&,const Book&);
    friend bool operator!=(const Book&,const Book&);
    friend bool operator<(const Book&,const Book&);
    friend bool operator>(const Book&,const Book&);
public:
    Book() = default;
    Book(const string &s1,const string &s2,const string &s3):isbn(s1),author(s2),pudate(s3) {}
    Book(std::istream &in) { in >> *this; }
private:
    string isbn;
    string author;
    string pudate;
};

ostream& operator<<(ostream&,const Book&);
istream& operator>>(istream&,Book&);
bool operator==(const Book&,const Book&);
bool operator!=(const Book&,const Book&);

bool operator<(const Book&,const Book&);
bool operator>(const Book&,const Book&);
#endif // EXERCISE_14_5_H_INCLUDED
