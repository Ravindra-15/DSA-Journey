#include <iostream>
using namespace std;

// Passing a pointer by reference
void util(int*& ptr) {
    ptr = ptr + 1;  // Increment the pointer, moving it to the next memory location
}

int main() {
    int a = 5;
    int* p = &a;  // p points to 'a'

    cout << "Before" << endl;
    cout << p << endl;  // Prints the memory address of 'a'

    util(p);  // Pass the pointer 'p' by reference to 'util'

    cout << "After" << endl;
    cout << p << endl;  // Prints the new memory address after increment

    return 0;
}
