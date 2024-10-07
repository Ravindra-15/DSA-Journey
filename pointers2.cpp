#include <iostream>

using namespace std;

int main()
{
    int value = 5;
    int *valPtr = &value;
    // Copy pointer
    int *newPtr = valPtr;

    cout << *valPtr << endl; //5
    cout << *newPtr << endl; //5

    int a = 10;
    int* p = &a;
    int* q = p;
    int* r = q;

    cout << a << endl;   // 10
    cout << &a << endl;  // address of 'a'
    cout << p << endl;    // address of 'a'
    cout << &p << endl;   // address of pointer 'p'
    cout << *p << endl;  // 10
    cout << q << endl;    // address of 'a'
    cout << &q << endl;   // address of pointer 'q'
    cout << *q << endl;   // 10
    cout << r << endl;    // address of 'a'
    cout << &r << endl;   // address of pointer 'r'
    cout << *r << endl;   // 10
    cout << (*p + *q + *r) << endl;      // 30 (10 + 10 + 10)
    cout << (*p)*2 + (*r)*3 << endl;     // 40 (10*2 + 10*3)
    cout << (*p/2) - (*q)/2 << endl;     //0 (5 - 5)
    
    return 0;
}
