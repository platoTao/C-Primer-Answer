#ifndef OR_QUERY_H_INCLUDED
#define OR_QUERY_H_INCLUDED

#include "Binary_query.h"

class OrQuery:public BinaryQuery
{
    friend Query operator|(const Query&,const Query&);
    OrQuery(const Query &left,const Query &right):
                BinaryQuery(left,right,"|") { }
    QueryResult eval(const TextQuery&) const;
};

inline Query operator|(const Query &lhs,const Query &rhs)
{
    return shared_ptr<Query_base>(new OrQuery(lhs,rhs));
}

QueryResult OrQuery::eval(const TextQuery &text) const
{
    auto right = *(rhs.eval(text).get_lines()),left = *(lhs.eval(text).get_lines());
    auto ret_lines = make_shared<set<line_no>>(left.begin(),left.end());
    ret_lines->insert(right.begin(),right.end());
    auto file = lhs.eval(text).get_file();
    return QueryResult(rep(),ret_lines,file);
}
#endif // OR_QUERY_H_INCLUDED
