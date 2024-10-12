#include <iostream>

using namespace std;

// Function to print array elements using recursion
void printArray(int arr[], int size, int index){
    if(index >= size)
    return;

    cout << arr[index] << " " ;
    // Recursive call to print the next element
    printArray(arr, size, index + 1);
}
int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10;
    int index = 0;
    printArray(arr, size, index);
    return 0;
}