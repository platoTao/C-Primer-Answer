#include "screen.h"

using namespace std;

int main()
{
    Screen<5,3> myScreen;
    myScreen.display(cout);
    cout << endl;
    myScreen.move(4,0).set('#');
    myScreen.display(cout);
    cout << endl;
    Screen<5,5> nextScreen('X');
    nextScreen.move(4,0).set('#').display(cout);
    cout << endl;
    nextScreen.clear('Z').display(cout);
    cout << endl;
    myScreen.clear();
    myScreen.move(3,0);
    myScreen.set('#');
    myScreen.display(cout);cout << endl;
    cin >> myScreen;
    cout << myScreen;
    return 0;
}
