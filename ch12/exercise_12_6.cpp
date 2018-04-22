#include<iostream>
#include<vector>
#include<new>

using namespace std;

vector<int> *get_vec()
{
    vector<int> *ptr = new vector<int>;
    return ptr;
}

vector<int> *read(vector<int> *p)
{
    cout << "Enter the numbers,ends of EOF" << endl;
    int n;
    while( cin >> n )
    {
        p->push_back(n);
    }
    return p;
}

void print(vector<int> *p)
{
    auto begin = p->cbegin();
    while(begin != p->cend())
    {
        cout << *begin++ << " ";
    }
    delete p;
    cout << endl << "print over" << endl;
}

int main()
{
    auto p = get_vec();
    p = read(p);
    print(p);
    return 0;
}
