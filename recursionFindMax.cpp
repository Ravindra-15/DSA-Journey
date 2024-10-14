#include <iostream>
#include <limits.h>

using namespace std;
// Function to find the maximum element in the array using recursion
// - max: reference to the maximum value found so far
void findMax(int arr[], int size, int i, int &max)
{
    // Base case: if the current index is greater than or equal to the size, stop recursion
    if (i >= size)
        return;

    if (arr[i] > max)
    {
        max = arr[i];
    }

    // Recursive call to check the next element in the array
    findMax(arr, size, i + 1, max);
}
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = 10;

    // Initialize max to the smallest possible integer
    int max = INT_MIN;
    int i = 0;

    // Call the recursive function to find the maximum value in the array
    findMax(arr, size, i, max);

    cout << "Maximum number: " << max << endl;

    return 0;
}
