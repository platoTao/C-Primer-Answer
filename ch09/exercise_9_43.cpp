#include<iostream>
#include<string>

using namespace std;

void replace_str(string &s,string oldVal,string newVal)
{
    auto index = s.begin();
    if(!s.empty())
    {
        while(s.end() != oldVal.size()+index)
        {
            if(string(index,index+oldVal.size())==oldVal)
            {
                index = s.erase(index,index+oldVal.size());
                index = s.insert(index,newVal.begin(),newVal.end());
                index += newVal.size();
            }
            else
                ++index;
        }
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
