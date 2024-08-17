#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[] = {8, 9, 10, 84, 4, 8, 2, 68, 44, 48, 36};
    int size = 11;
    // Initialize max with the smallest possible integer value
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // Check if the current element is greater than the current max
        if (arr[i] > max)
        {
             // Update max if the current element is greater
            max = arr[i];
        }
    }
    // Print the greatest number found in the array
    cout << "The Greatest Number is : " << max;
    return 0;
}