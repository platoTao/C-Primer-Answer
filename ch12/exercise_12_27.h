#ifndef EXERCISE_12_27_H_INCLUDED
#define EXERCISE_12_27_H_INCLUDED
#include<iostream>
#include<map>
#include<string>
#include<set>
#include<fstream>
#include<vector>
#include<memory>
#include<sstream>
#endif // EXERCISE_12_27_H_INCLUDED

using namespace std;
using line_no = vector<string>::size_type;
class QueryResult;

class TextQuery
{
    friend class QueryResult;
public:
    TextQuery(ifstream &f);
    QueryResult query(const string&) const;
private:
    shared_ptr<vector<string>> file;
    map<string,shared_ptr<set<line_no>>> wm;
};

TextQuery::TextQuery(ifstream &f):file(new vector<string>)
{
    string text;
    while(getline(f,text))
    {
        file->push_back(text);
        int n = file->size()-1;
        istringstream line(text);
        string word;
        while(line >> word)
        {
            auto &lines = wm[word];
            if(!lines)
                lines.reset(new set<line_no>);
            lines->insert(n);
        }
    }
}

class QueryResult
{
    friend ostream& print(ostream&,const QueryResult&);
public:
    QueryResult(string s,shared_ptr<set<line_no>> p,shared_ptr<vector<string>> f):
                sought(s),lines(p),file(f) {}
private:
    string sought;
    shared_ptr<set<line_no>> lines;
    shared_ptr<vector<string>> file;
};

QueryResult TextQuery::query(const string& sought) const
{
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc = wm.find(sought);
    if (loc == wm.end())
        return QueryResult(sought,nodata,file);
    else
        return QueryResult(sought,loc->second,file);
}

ostream &print(ostream &os,const QueryResult &qr)
{
    os << qr.sought << " occurs " << qr.lines->size() << " "
       << qr.lines->size() << "times" << endl;
    for(auto num : *qr.lines)
        os << "\t(line " << num + 1 << ")"<< *(qr.file->begin() + num) << endl;
    cout << "well 1" << endl;
}
