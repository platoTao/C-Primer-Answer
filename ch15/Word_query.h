#ifndef WORD_QUERY_H_INCLUDED
#define WORD_QUERY_H_INCLUDED

#include"Query_base.h"

class WordQuery:public Query_base
{
    friend class Query;
    WordQuery(const string &s) : query_word(s) {}

    QueryResult eval(const TextQuery &t) const
                        {
                            return t.query(query_word);
                        }
    string rep() const { return query_word; }
    string query_word;
};

#endif // WORD_QUERY_H_INCLUDED
