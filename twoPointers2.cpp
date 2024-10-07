#include <iostream>
using namespace std;

void solve(int** ptr){
     //3 cases...................
    // ptr = ptr + 1;
    // *ptr = *ptr + 1;
     **ptr = **ptr + 1;  // Incrementing the value of a by 1
}

int main()
{
    int a = 10;
    int* p = &a;
    int** r = &p;

    cout << "Before" << endl;
    cout << a << endl;       // 10
    cout << &a << endl;      // Address of a
    cout << p << endl;       // Address of a (stored in p)
    cout << *p << endl;      // 10 (value of a)

    solve(r);  // a is incremented by 1 here

    cout << "After" << endl;
    cout << a << endl;       // 11 (value of a incremented)
    cout << &a << endl;      // Address of a (unchanged)
    cout << p << endl;       // Address of a (unchanged)
    cout << *p << endl;      // 11 (updated value of a)

    return 0;
}
