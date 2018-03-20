#include<iostream>
#include<string>

using namespace std;

string &append(string &s,const string &s1,const string &s2)
{
   s.insert(0,s1);
   //s.insert(s.size(),s2);
   s.append(s2);
   return s;
}

int main()
{
    string s("Jack");
	string &name = append(s,"Mr.","III");
	cout << name << endl;
	cout << s << endl;
    return 0;
}
