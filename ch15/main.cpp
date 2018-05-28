#include "Or_query.h"
#include "And_query.h"
#include "Not_query.h"
void runQueries(ifstream &infile)
{
    TextQuery tq( infile);
    Query q = ~Query("men")|Query("day")|Query("a");
    cout << q;
    print(cout,q.eval(tq));
}

int main()
{
    ifstream infile("text.txt");
    runQueries(infile);
    return 0;
}
