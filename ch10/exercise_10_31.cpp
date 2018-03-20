#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>


using namespace std;

int main()
{
   vector<int> numbers;
   istream_iterator<int> in(cin),eof;
   unique_copy(in,eof,back_inserter(numbers));

   //sort(numbers.begin(),numbers.end());
   ostream_iterator<int> out(cout," ");
   copy(numbers.begin(),numbers.end(),out);

   return 0;
}
