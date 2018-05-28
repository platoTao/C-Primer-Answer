#ifndef ANDOR_QUERY_H_INCLUDED
#define ANDOR_QUERY_H_INCLUDED

#include "Binary_query.h"

class AndQuery:public BinaryQuery
{
    friend Query operator&(const Query&,const Query&);
    AndQuery(const Query &left,const Query &right):
                    BinaryQuery(left,right,"&") { }
    QueryResult eval(const TextQuery&) const ;
};

inline Query operator&(const Query &lhs,const Query &rhs)
{
    return shared_ptr<Query_base>(new AndQuery(lhs,rhs));
}

QueryResult AndQuery::eval(const TextQuery &text) const
{
    auto right = *(rhs.eval(text).get_lines()),left = *(lhs.eval(text).get_lines());
    auto ret_lines = make_shared<set<line_no>>();
    set_intersection(left.begin(),left.end(),right.begin(),right.end(),
                     inserter(*ret_lines,ret_lines->begin()));
    auto file = lhs.eval(text).get_file();
    return QueryResult(rep(),ret_lines,file);
}

#endif // ANDOR_QUERY_H_INCLUDED
