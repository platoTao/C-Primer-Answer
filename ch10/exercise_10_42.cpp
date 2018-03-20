#include<iostream>
#include<string>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

void elimDups(list<string> &lst)
{
    lst.sort();
    lst.unique();
}

int main()
{
    list<string> lst{"fox","jumps","over","quick","red","slow","the","the","turtle"};
    elimDups(lst);
    ostream_iterator<string> out(cout," ");
    copy(lst.cbegin(),lst.cend(),out);
    return 0;
}
