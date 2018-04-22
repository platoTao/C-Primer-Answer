#include<iostream>
#include<string>

using namespace std;

char* join(char* a,char*b)
{
    char* p = new char[20];
    size_t i = 0;
    for(;a[i]!='\0';++i)
        p[i] = a[i];
    for(size_t j = 0;b[j] != '\0';++j)
        p[i+j] = b[j];
    return p;
}

string join(const string &a,const string &b)
{
    return a+b;
}

int main()
{
    char* a = "hello,";
    char* b = "world";
    string c("Hello,"),d("World");
    char* seq1 = join(a,b);
    for(size_t i = 0;seq1[i]!='\0';++i)
        cout << *(seq1+i);
    cout << endl;
    delete [] seq1;
    string seq2 = join(c,d);
    cout<< seq2 << endl;
    return 0;
}
