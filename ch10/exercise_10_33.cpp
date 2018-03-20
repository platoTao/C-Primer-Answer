#include<iostream>
#include<vector>
#include<iterator>
#include<fstream>


using namespace std;

int main(int argc,char **argv)
{
   ifstream in(argv[1]);
   ofstream out1(argv[2]),out2(argv[3]);
   istream_iterator<int> iter(in),end;
   ostream_iterator<int> w1(out1," "),w2(out2,"\n");
   while (iter != end )
   {
       if ( *iter % 2 == 1)
        w1 = *iter;
       else
        w2 = *iter;
        ++iter;
   }

   return 0;
}
