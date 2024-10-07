#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {12, 14, 16, 18};

    // Basic array and pointer usage
    cout << arr << endl;
    cout << arr[0] << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;

    int* p = arr;
    cout << p << endl;
    cout << &p << endl;

    // Accessing array elements using pointer dereferencing
    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;
    cout << arr[3] << endl;
    cout << 3[arr] << endl;
    cout << *(arr + 3) << endl;

    // Array can be printed using this method too
    cout << "Values ................." << endl;
    for(int i = 0; i < 4; i++){
        cout << i[arr] << endl;
    }

    // Size of array and pointer
    int brr[5];
    int* p2 = brr;
    cout << "Size of array is: " << sizeof(brr) << endl;
    cout << "Size of pointer is: " << sizeof(p2) << endl;

    return 0;
}
 