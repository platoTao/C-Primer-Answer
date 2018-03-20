#include<iostream>
#include<string>

using namespace std;

void replace_str(string &s,string oldVal,string newVal)
{
   size_t index = 0;
   while(index < s.size()-oldVal.size())
   {
       if(s.substr(index,oldVal.size())==oldVal)
       {
           s.replace(index,oldVal.size(),newVal);
           index += newVal.size();
       }
       else
        ++index;
   }
}

int main()
{
    string s("To drive straight thru is a foolish, tho courageous act.");
	replace_str(s,"tho","though");
	cout << s << endl;
	replace_str(s, "thru", "through");
	cout << s << endl;
    return 0;
}
