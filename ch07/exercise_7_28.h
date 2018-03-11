#ifndef EXERCISE_7_23_H_INCLUDED
#define EXERCISE_7_23_H_INCLUDED

using std::string;using std::ostream;
class Screen {

    public:
    typedef string::size_type pos;
    Screen() = default;
    Screen(pos ht,pos wd):height(ht),width(wd),contents(ht * wd,' ') {}
    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht * wd,c) {}
    Screen set(char s)
    {
        contents[cursor] = s;
        return *this;
        }
    Screen set(pos r,pos c,char s)
    {
        contents[r * width + c] = s;
        return *this;
        }
    Screen display(ostream &os)
    {
        do_display(os);
        return *this;
        }
    const Screen display(ostream &os) const
    {
        do_display(os);
        return *this;
        }
    char get() const {return contents[cursor];}
    inline char get(pos r,pos c) const;
    Screen move(pos r,pos c);
    private:
    void do_display(ostream &os) const
    {
        os << contents;
    }
    pos cursor = 0;
    pos height = 0,width = 0;
    string contents;
};

inline
Screen Screen::move(pos r,pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;

}

char Screen::get(pos r,pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

#endif // EXERCISE_7_23_H_INCLUDED
