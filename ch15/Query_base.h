#ifndef QUERY_BASE_H_INCLUDED
#define QUERY_BASE_H_INCLUDED
#include "exercise_12_27.h"

class Query_base
{
    friend class Query;
protected:
    using line_no = vector<string>::size_type;
    virtual ~Query_base() = default;
private:
    virtual QueryResult eval(const TextQuery&) const = 0;
    virtual string rep() const = 0;
};

#endif // QUERY_BASE_H_INCLUDED
