#include<iostream>
#include<vector>
#include<memory>

using namespace std;

shared_ptr<vector<int>>  get_vec()
{
    shared_ptr<vector<int>>  ptr =  make_shared<vector<int>>();
    return ptr;
}

shared_ptr<vector<int>>  read(shared_ptr<vector<int>>  p)
{
    cout << "Enter the numbers,ends of EOF" << endl;
    int n;
    while( cin >> n )
    {
        p->push_back(n);
    }
    return p;
}

void print(shared_ptr<vector<int>>  p)
{
    auto begin = p->cbegin();
    while(begin != p->cend())
    {
        cout << *begin++ << " ";
    }
    cout << endl << "print over" << endl;
}

int main()
{
    auto p = get_vec();
    p = read(p);
    print(p);
    return 0;
}
