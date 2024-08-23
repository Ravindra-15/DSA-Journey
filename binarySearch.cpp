#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int start = 0; // Initialize the start index
    int end = size - 1; //end index
    int mid = start + (end-start)/2; // Calculate the middle index
    while (start <= end)
    {
        if  (arr[mid] == target)
        {
            return mid;   // Target found, return index
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 5, 7, 8, 12, 15, 18};
    int size = 7;
    int target = 15; // Target element to search

    int indexOfTarget = binarySearch(arr, size, target);

    if (indexOfTarget == -1)
    {
        cout << "The target is not found." << endl;
    }
    else
    {
        cout << "The target is found at index " << indexOfTarget;
    }

    return 0;
}