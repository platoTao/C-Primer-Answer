#ifndef NOT_QUERY_H_INCLUDED
#define NOT_QUERY_H_INCLUDED

#include "Query.h"

class NotQuery:public Query_base
{
    friend Query operator~(const Query &);
    NotQuery(const Query &q):query(q) {}
    string rep() const { return "~(" + query.rep() + ")"; }
    QueryResult eval(const TextQuery&) const;
    Query query;
};

inline Query operator~(const Query &operand)
{
    return shared_ptr<Query_base>(new NotQuery(operand));
}

QueryResult NotQuery::eval(const TextQuery &text) const
{
    auto result = *(query.eval(text).get_lines());
    auto file = query.eval(text).get_file();
    auto ret_lines = make_shared<set<line_no>>();
    auto beg = result.begin(),end = result.end();
    auto sz =file->size();
    for(size_t n = 0; n !=sz;++n){
        if(beg != end || *beg != n)
            ret_lines->insert(n);
        else if(beg != end)
            ++beg;
    }
    return QueryResult(rep(),ret_lines,file);
}

#endif // NOT_QUERY_H_INCLUDED
