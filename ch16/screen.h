#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED

#include <string>
#include <iostream>

template<int H,int W> class Screen;

template<int H,int W>
std::istream &operator>>(std::istream&,Screen<H,W>&);

template<int H,int W>
std::ostream &operator<<(std::ostream&,const Screen<H,W>&);

class Window_mgr;

template <int H,int W>
class Screen
{
    friend class Window_mgr;
    friend std::istream &operator>> <H,W>(std::istream&,Screen<H,W>&);
    friend std::ostream &operator<< <H,W>(std::ostream&,const Screen<H,W>&);
public:
    Screen(): contents(H*W,' ') { }
    Screen(char c):contents(H*W,c) {}
    char get() const { return contents[cursor];}
    inline char get(int,int) const;
    Screen& clear(char = bkground);

    Screen &move(int r,int c);
    Screen &set(char);
    Screen &set(int,int,char);
    Screen &display(std::ostream &os)
        { do_display(os); return *this; }
    const Screen &display(std::ostream &os) const
        { do_display(os); return *this; }
private:
    static const char bkground = ' ';
    void do_display(std::ostream &os) const {os << contents;}
    int cursor = 0;
    std::string contents;
};

template <int H,int W>
Screen<H,W>& Screen<H,W>::clear(char c)
{
    contents = std::string(H*W,c);
    return *this;
}

template <int H,int W>
inline
Screen<H,W>& Screen<H,W>::move(int r,int c)
{
    int row = r*W;
    cursor = row+c;
    return *this;
}

template <int H,int W>
Screen<H,W>& Screen<H,W>::set(char c)
{
    contents[cursor] = c;
    return *this;
}

template <int H,int W>
Screen<H,W>& Screen<H,W>::set(int r,int c,char ch)
{
    contents[W*r+c] = ch;
    return *this;
}

template <int H,int W>
char Screen<H,W>::get(int r,int c) const
{
    return contents[r*W+c];
}

template<int H,int W>
std::istream & operator>>(std::istream &is,Screen<H,W> &sc)
{
    std::string t;
    is >> t;
    sc.contents = t.substr(0,H*W);
    return is;
}

template<int H,int W>
std::ostream & operator<<(std::ostream &os,const Screen<H,W> &sc)
{
    os << sc.contents;
    return os;
}

#endif // SCREEN_H_INCLUDED
