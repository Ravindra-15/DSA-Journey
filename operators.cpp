#include <iostream>
using namespace std;

int main() {
    bool a = true;
    bool b = false;
    bool c = true;

    // Logical AND operator (&)
    cout << (a & b) << endl; // false (0) because both operands are not true
    cout << (a & c) << endl; // true (1) because both operands are true

    // Logical OR operator (||)
    cout << (a || b) << endl; // true (1) because at least one operand is true
    cout << (a || c) << endl; // true (1) because both operands are true

    // Logical XOR operator (^)
    cout << (a ^ b) << endl; // true (1) because one operand is true and the other is false
    cout << (a ^ c) << endl; // false (0) because both operands are true

    // Logical NOT operator (~)
    cout << ~(a) << endl; // -2 (bitwise NOT flips all bits of true (1))
    cout << ~(b) << endl; // -1 (bitwise NOT flips all bits of false (0))

    cout << endl;

    // Bitwise AND operator (&)
    int num1 = 2; // binary: 10
    int num2 = 1; // binary: 01
    cout << (num1 & num2) << endl; // 0 (bitwise AND: 10 & 01 = 00)

    cout << (num1 || num2) << endl; // 1 (both are non-zero, treated as true)

    cout << endl;

    // Bitwise left shift operator (<<)
    int num3 = 12; // binary: 1100
    num3 = num3 << 2; // shifts bits two positions to the left 110000
    cout << num3; // 48 (decimal equivalent of 110000)

    cout << endl;

    // Increment (++) and Decrement (--) operators

    int value1 = 5;
    cout << value1++ << endl; // prints 5 (value1 is incremented to 6 after this statement)
    cout << value1 << endl;   // prints 6
    cout << ++value1 << endl; // increments to 7, then prints 7
    cout << value1 << endl;   // prints 7
    cout << value1-- << endl; // prints 7 (value1 is decremented to 6 after this statement)
    cout << value1 << endl;   // prints 6
    cout << --value1 << endl; // decrements to 5, then prints 5
    cout << value1 << endl;   // prints 5

    // Combined pre-increment in an expression
    int value2 = 5;
    cout << (++value2) * (++value2); // increments value2 twice before multiplying: (6) * (7) = 42
    cout << endl;

    // Continue keyword in a loop
    for(int i = 0; i < 5; i++){
        continue; // skips the rest of the loop iteration
        cout << i; // this line will not execute because of continue
    }

    return 0;
}
