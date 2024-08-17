#include <iostream>

using namespace std;

int main()
{
    // Initialize the array with 9 elements
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = 9;
    // Initialize the starting and ending indices
    int start = 0;
    int end = size - 1;
    while (start <= end)   // Loop to reverse the array
    {
        swap(arr[start], arr[end]); // Swap the elements at the start and end indices
        start++;  // Move the start index forward
        end--;     // Move the end index backward
    } 
     // Output the reversed array
    cout << "reverse of the array : " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}