std::ostream& operator<<(ostream &out,const String& item)
{
    for(auto b = s.begin();b != s.end();)
        out << *b++;
    return os;
}

void print(const String &s)
{
    if(s.size() != 0 )
    {
        for(auto b = s.begin();b != s.end();)
            cout << *b++;
        cout << std::endl;
    }
    else
        cout << "nothing is here\n";

}
