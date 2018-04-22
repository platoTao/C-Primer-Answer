#include "exercise_12_27.h"

using namespace std;

void runQueries(ifstream &infile)
{
    TextQuery tq( infile);
    while(1)
    {
        cout << "Enter word to look for,or q to quit: ";
        string s;
        if(!(cin >> s) ||  s== "q")break;
        print(cout,tq.query(s)) << endl;
        // this will occur error,and I don't know why;
        cout << "well 2" << endl;
    }
}

int main()
{
    ifstream infile("text.txt");
    runQueries(infile);
    return 0;
}
