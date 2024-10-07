#include <iostream>
using namespace std;
void arrSize(int arr[]) {
    // In this function, `arr` decays to a pointer, so sizeof(arr) will give the size of the pointer.
    cout << "Size of array inside arrSize function: " << sizeof(arr) << endl;
}
int main() {
    // First block
    char ch[20] = "Ravindra Kumar";
    char* ptr1 = ch;
    cout << ptr1 << endl;        // Prints the string
    cout << *ptr1 << endl;       // Prints the first character
    cout << *(ptr1 + 1) << endl; // Prints the second character
    cout << &ptr1 << endl;       // Prints the address of pointer `ptr1`
    cout << &ch << endl;         // Prints the address of the array `ch`
    cout << ch << endl;          // Prints the string stored in `ch`

    // Second block
    char name1[10] = "SmartBoy";
    char* ptr2 = &name1[0];
    cout << name1 << endl;       // Prints the string
    cout << &name1 << endl;      // Prints the address of the array `name1`
    cout << *name1 << endl;      // Prints the first character of the array
    cout << *(name1 + 3) << endl; // Prints the 4th character
    cout << ptr2 << endl;        // Prints the string using pointer `ptr2`
    cout << &ptr2 << endl;       // Prints the address of pointer `ptr2`
    cout << *(ptr2 + 3) << endl; // Prints the 4th character using pointer `ptr2`
    cout << ptr2 + 2 << endl;    // Prints the string starting from the 3rd character
    cout << *ptr2 << endl;       // Prints the first character of the string
    cout << ptr2 + 8 << endl;    // Might print a null character or garbage beyond the array

    // Third block
    char ch2 = 'j';
    char* ptr3 = &ch2;
    cout << ptr3 << endl;        // Prints the string starting from the character 'j' and might print garbage after that.

    // Fourth block
    char name2[10] = "Ravindra";
    cout << name2 << endl;       // Prints the string stored in `name2`
    const char* ptr4 = "Ravindra"; // Use const to avoid modification of string literal
    cout << ptr4 << endl;        // Prints the string literal

    // Fifth block
    int arr[10] = {10, 20, 30, 40};
    cout << "Size of array inside main function: " << sizeof(arr) << endl;
    arrSize(arr);

    return 0;
}


