#include <iostream>
using namespace std;
// Function to perform binary search in a sorted array
int binarySearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1; // Return -1 if the target is not found in the array
}

// Function to perform exponential search in a sorted array
int expSearch(int arr[], int size, int target)
{
    if (arr[0] == target)
        return 0;
    int i = 1;
    // Find the range where the target element could be present
    while ((i < size) && (arr[i] <= target))
    {
        i = i * 2;
    }
    // Perform binary search in the identified range
    return binarySearch(arr, i / 2, min(i, size - 1), target);
}
int main()
{
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int size = sizeof(arr) / sizeof(int); // size of array

    int target = 15;
    int ans = expSearch(arr, size, target); // Perform exponential search
    cout << "The target element " << target << " is at index " << ans;
    return 0;
}