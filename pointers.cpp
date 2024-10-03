#include <iostream>
using namespace std;

int main() {
    // Example with integers
    int a = 5, b = 6;
    cout << "The value of a is: " << a << endl; 
    cout << "The address of a is: " << &a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The address of b is: " << &b << endl;

    // Pointer example
    int c = 9;
    int* ptr = &c;
    cout << "Address of c is: " << &c << endl;
    cout << "Value stored at ptr is: " << ptr << endl;
    cout << "The value ptr is pointing to: " << *ptr << endl;
    cout << "Address of ptr is: " << &ptr << endl;

    // Size of pointer types
    int num = 5;
    int* numPtr = &num;
    cout << "Size of int pointer: " << sizeof(numPtr) << " bytes" << endl;

    char ch = 'R';
    char* charPtr = &ch;
    cout << "Size of char pointer: " << sizeof(charPtr) << " bytes" << endl;

    double d = 5.05;
    double* doublePtr = &d;
    cout << "Size of double pointer: " << sizeof(doublePtr) << " bytes" << endl;

    //Avoid dereferencing a null pointer
    int* nullPtr = nullptr;
    if (nullPtr != nullptr) {
        cout << *nullPtr << endl;  //This will only run if nullPtr is not null...
    } else {
        cout << "nullPtr is a null pointer and cannot be dereferenced!" << endl;
    }



    return 0;
}
